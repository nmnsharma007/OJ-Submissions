#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2000+5;
double dp[N][N];

double solve(int i,int j,int n,double p,int t)
{
	if(j > t)
		return min(n,i-1);
	if(i > n)
		return n;
	if(dp[i][j] > 0.0)
		return dp[i][j];
	return dp[i][j] = solve(i+1,j+1,n,p,t) * p + solve(i,j+1,n,p,t) * (1.0 - p);
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,t;
	double p;
	cin >> n >> p >> t;
	for(int i = 0 ; i <= n;++i){
		for(int j = 0; j <= t;++j){
			dp[i][j] = -1.0;
		}
	}
	double ans = solve(1,1,n,p,t);
	cout << fixed << setprecision(10) << ans << "\n";
}
