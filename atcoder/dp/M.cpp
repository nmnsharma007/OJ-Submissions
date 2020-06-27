#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;
int main()
{
	int n,k;
	cin >> n >> k;
	ll arr[n+1];
	for(int i=1;i<=n;i++){
		cin >> arr[i];
	}
	ll dp[n+1][k+1];//dp[i][j] is number of ways to distribute j candies among first i people
	for(int i=1;i<=k;i++){
		dp[0][i] = 0;
	}
	dp[0][0] = 1;
	for(int i=1;i<=n;i++){
		ll sum[k+1];//sum[j] is number of ways to distribute atmost j candies among i-1 people
		sum[0] = dp[i-1][0];
		for(int j=1;j<=k;j++){
			sum[j] = (sum[j-1] + dp[i-1][j])%MOD;
		}
		for(int j=0;j<=k;j++){
			ll upper = sum[j];
			ll lower_index = j-arr[i]-1;
			if(lower_index >= 0){
				upper = (upper - sum[lower_index]+MOD)%MOD;
			}
			dp[i][j] = upper%MOD;
		}
	}
	cout << dp[n][k]%MOD << "\n";
	return 0;
}
