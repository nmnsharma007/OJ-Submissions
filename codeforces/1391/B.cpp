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
		int n,m;
		cin >> n >> m;
		string grid[n];
		for(int i = 0; i < n;++i){
			cin >> grid[i];
		}
		int ans = 0;
		for(int j = 0; j < m-1;++j){
			if(grid[n-1][j] == 'D')
				++ans;
		}
		for(int i = 0; i < n-1;++i){
			if(grid[i][m-1] == 'R')
				++ans;
		}
		cout << ans << "\n";
	}
}
