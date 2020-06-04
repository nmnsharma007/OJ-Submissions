#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define mod 1000000007
int main()
{
	int n,k;
	cin >> n >> k;
	ll dp[k+1][n+1];
	memset(dp,0,sizeof(dp));
	for(int i=1;i<=n;i++)
		dp[1][i] = 1;
	for(int i=2;i<=k;i++)
	{
		for(int j=1;j<=n;j++)
		{
			for(int l=j;l<=n;l+=j)
				dp[i][l] = (dp[i][l]+dp[i-1][j])%mod;
		}
	}
	ll ans = 0;
	for(int i=1;i<=n;i++)
		ans = (ans+dp[k][i])%mod;
	cout << ans << "\n";
}