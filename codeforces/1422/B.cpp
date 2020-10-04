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
		ll grid[n+1][m+1];
		for(int i = 1;i <= n;++i){
			for(int j = 1; j <= m;++j){
				cin >> grid[i][j];
			}
		}
		ll ans = 0;
		for(int i = 1; i <= n;++i){
			for(int j = 1; j <= m;++j){
				if(grid[i][j] == -1)
					continue;
				vector<ll> temp;
				temp.push_back(grid[i][j]);
				grid[i][j] = -1;
				if(m-j+1 <= m && m-j+1 > 0 && grid[i][m-j+1] != -1){
					temp.push_back(grid[i][m-j+1]);
					grid[i][m-j+1] = -1;
				}
				if(n-i+1 <= n && n-i+1 > 0 && grid[n-i+1][j] != -1){
					temp.push_back(grid[n-i+1][j]);
					grid[n-i+1][j] = -1;
				}
				if(m-j+1 <= m && m-j+1 > 0 && n-i+1 <= n && n-i+1 > 0 && grid[n-i+1][m-j+1] != -1){
					temp.push_back(grid[n-i+1][m-j+1]);
					grid[n-i+1][m-j+1] = -1;
				}
				sort(temp.begin(),temp.end());
				ll median = 1;
				int len = temp.size();
				if(len%2 == 1)
					median = temp[(len-1)/2];
				else
					median = temp[len/2];
				for(auto x : temp)
					ans += abs(median-x);
			}
		}
		cout << ans << "\n";
	}
}
