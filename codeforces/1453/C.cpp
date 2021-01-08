#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string grid[n];
		for(int i = 0; i < n;++i){
			cin >> grid[i];
		}
		vector<int> ans(10,0);
		for(int digit = 0;digit <= 9;++digit){
			int min_row = n,min_col = n,max_row = -1,max_col = -1;
			for(int row = 0; row < n;++row){
				for(int col = 0;col < n;++col){
					int d = grid[row][col] - '0';
					if(d == digit){
						if(row < min_row)
							min_row = row;
						if(row > max_row)
							max_row = row;
						if(col > max_col)
							max_col = col;
						if(col < min_col)
							min_col = col;
					}
				}
			}
			for(int row = 0;row < n;++row){
				for(int col = 0;col < n;++col){
					int d = grid[row][col] - '0';
					if(digit == d){
						int area = max(max_row-row,row-min_row) * max(n-col-1,col);
						ans[digit] = max(ans[digit],area);
						area = max(n-row-1,row) * max(max_col-col,col-min_col);
						ans[digit] = max(ans[digit],area);
					}
				}
			}	
		}
		for(int i = 0; i < 10;++i){
				cout << ans[i] << " ";
		}
		cout << "\n";
	}
}
