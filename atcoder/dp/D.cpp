#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	int N,W;
	cin >> N >> W;
	ll w[N+1],v[N+1];
	for(int i=1;i<=N;i++){
		cin >> w[i] >> v[i];
	}
	ll dp[N+1][W+1];//dp[i][j] = max value with i items and knapsack capacity of j
	for(int i=0;i<=W;i++)
		dp[0][i] = 0;
	for(int i=0;i<=N;i++)
		dp[i][0] = 0;
	for(int i=1;i<=N;i++){
		for(int j=1;j<=W;j++){
			if(j-w[i] >= 0)
				dp[i][j] = max(dp[i-1][j],dp[i-1][j-w[i]]+v[i]);
			else
				dp[i][j] = dp[i-1][j];
		}
	}
	cout << dp[N][W] << "\n";
}