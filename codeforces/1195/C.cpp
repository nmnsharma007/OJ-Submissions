#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	int n;
	cin >> n;
	ll h1[n],h2[n];
	for(int i=0;i<n;i++)
		cin >> h1[i];
	for(int i=0;i<n;i++)
		cin >> h2[i];
	ll dp[n][2];
	dp[0][0] = h1[0];
	dp[0][1] = h2[0];
	for(int i=1;i<n;i++)
	{
		dp[i][0] = max(dp[i-1][0],dp[i-1][1]+h1[i]);
		dp[i][1] = max(dp[i-1][1],dp[i-1][0]+h2[i]);
	}
	cout << max(dp[n-1][0],dp[n-1][1]) << "\n";
}