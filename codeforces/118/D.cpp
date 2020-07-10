#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e8;
ll n1,n2,k1,k2;
ll dp[110][110][14][14];
int solve(int f,int h,int lf,int lh)
{
	if(dp[f][h][lf][lh] == -1){
		ll ans = 0;
		if(h > 0 && lh > 0)
			ans = (ans + solve(f,h-1,k1,lh-1))%MOD;
		if(f > 0 && lf > 0)
			ans = (ans + solve(f-1,h,lf-1,k2))%MOD;
		dp[f][h][lf][lh] = ans%MOD;
	}
	return dp[f][h][lf][lh];
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n1 >> n2 >> k1 >> k2;
	memset(dp,-1,sizeof(dp));
	for(int i = 0; i <= k1;i++){
		for(int j = 0; j <= k2;j++)
			dp[0][0][i][j] = 1;
	}
	ll ans = solve(n1,n2,k1,k2);
	cout << ans << "\n";
}
