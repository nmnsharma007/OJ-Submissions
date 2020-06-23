#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	double p[n+1];
	for(int i=1;i<=n;i++)
		cin >> p[i];
	double dp[n+1][n+1];//dp[i][j] is probability of getting j heads with first i coins
	for(int i=0;i<=n;i++){
		for(int j=0;j<=n;j++)
			dp[i][j] = 0.0;
	}
	dp[0][0] = 1.0;
	for(int i=1;i<=n;i++){
		for(int j=0;j<=n;j++){
			if(j == 0){
				dp[i][j] = dp[i-1][j]*(1-p[i]);
				continue;
			}
			dp[i][j] = dp[i-1][j-1]*p[i] + (1-p[i])*(dp[i-1][j]);
		}
	}
	double answer = 0;
	for(int i=(n+1)/2;i<=n;i++)
		answer += dp[n][i];
	printf("%.12lf\n",answer);
}