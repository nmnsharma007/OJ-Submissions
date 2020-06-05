#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
using ll = long long;
int main()
{
	int n;
	cin >> n;
	ll dp[n+1][2];
	dp[1][0] = 1;
	dp[1][1] = 0;
	for(int i=2;i<=n;i++)
	{
		dp[i][0] = (dp[i-1][1] + 2LL * dp[i-1][0])%mod;
		dp[i][1] = (3LL * dp[i-1][0])%mod;
	}
	cout << dp[n][1] << "\n";
}