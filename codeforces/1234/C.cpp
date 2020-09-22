#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int dx[] = {0,0,-1,1};
int dy[] = {1,-1,0,0};
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int q;
	cin >> q;
	while(q--){
		int n;
		cin >> n;
		string arr[2];
		for(int i = 0; i < 2;++i){
			cin >> arr[i];
		}
		for(int i = 0; i < 2;++i){
			for(int j = 0; j < n;++j){
				int k = arr[i][j] - '0';
				if(k <= 2)
					arr[i][j] = '0';
				else
					arr[i][j] = '1';
			}
		}
		int row = 0,col = 0;
		int flag = 0;
		while(flag == 0 && col < n){
			if(arr[row][col] == '0'){
				++col;
				if(row == 1 && col == n){
					flag = 1;
					break;
				}
				continue;
			}
			if(arr[1-row][col] == '1'){
				row = 1 - row;
				++col;
				if(row == 1 && col == n){
					flag = 1;
					break;
				}
			}
			else
				break;
		}
		if(flag)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
