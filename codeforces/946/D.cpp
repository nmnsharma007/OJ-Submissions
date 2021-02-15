#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m,k;
	cin >> n >> m >> k;
	string grid[n];
	vector<int> store[n+1];
	for(int i = 0; i < n;++i){
		cin >> grid[i];
		store[i+1].push_back(0);
		for(int j = 0; j < m;++j){
			if(grid[i][j] == '1')
				store[i+1].push_back(j+1);
		}
	}
	
	int pre[n+1][k+1];
	for(int i = 1; i <= n;++i){
		int num = store[i].size() - 1;
		store[i].push_back(store[i][num]+1);
		for(int j = 0; j <= min(k,num);++j){
			int res = 1e9+7;
			for(int l = 0; l <= j;++l){
				int start = store[i][l+1];
				int end = store[i][num-j+l];
				res = min(res,max(0,end-start+1));
			}
			pre[i][j] = res;
		}
	}
	int dp[n+1][k+1];
	memset(dp,0,sizeof(dp));
	for(int i = 1; i <= n;++i){
		for(int j = 0; j <= k;++j){
			int num = store[i].size()-2;
			dp[i][j] = 1e9+7;
			for(int l = 0; l <= min(j,num);++l){
				dp[i][j] = min(dp[i][j],pre[i][l]+dp[i-1][j-l]);
			}
		}
	}
	cout << dp[n][k] << "\n";
}
