#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(nullptr);
	int n,m,k;
	cin >> n >> m >> k;
	ll arr[n+1];
	for(int i = 1; i <= n;++i){
		cin >> arr[i];
	}
	arr[0] = 0;
	for(int i = 1; i <= n;++i){
		arr[i] += arr[i-1];
	}
	ll dp[n+1][k+1];//dp[i][j] is maximum sum with j segments taken with first i elements.
	memset(dp,0,sizeof(dp));
	for(int i = 1; i <= n;++i){
		for(int j = 1; j <= k;++j){
			if(i >= m)
				dp[i][j] = max(dp[i-1][j],dp[i-m][j-1] + arr[i] - arr[i-m]);
			else
				dp[i][j] = dp[i-1][j];
		}
	}
	cout << dp[n][k] << "\n";
}
