#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin >> m >> n;
	int grid[m][n];
	int ans[m][n];
	for(int i = 0; i < m;++i){
		for(int j = 0; j < n;++j){
			cin >> grid[i][j];
			ans[i][j] = 1;
		}
	}
	for(int i = 0; i < m;++i){
		for(int j = 0; j < n;++j){
			if(grid[i][j] == 0){
				for(int row = 0; row < m;++row){
					ans[row][j] = 0;
				}
				for(int col = 0;col < n;++col){
					ans[i][col] = 0;
				}
			}
		}
	}
	for(int i = 0; i < m;++i){
		for(int j = 0; j < n;++j){
			if(grid[i][j] == 0){
				for(int row = 0; row < m;++row){
					if(ans[row][j] == 1){
						cout << "NO\n";
						return 0;
					}
				}
				for(int col = 0; col < n;++col){
					if(ans[i][col] == 1){
						cout << "NO\n";
						return 0;
					}
				}
			}
			else{
				int flag = 0;
				for(int row = 0; row < m;++row){
					if(ans[row][j] == 1)
						flag = 1;
				}
				for(int col = 0; col < n;++col){
					if(ans[i][col] == 1)
						flag = 1;
				}
				if(flag == 0){
					cout << "NO\n";
					return 0;
				}
			}
		}
	}
	cout << "YES\n";
	for(int i = 0; i < m;++i){
		for(int j = 0; j < n;++j){
			cout << ans[i][j] << " ";
		}
		cout << "\n";
	}
}