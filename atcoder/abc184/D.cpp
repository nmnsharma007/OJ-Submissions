#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 101;
double dp[N][N][N];

double solve(int a,int b,int c)
{
	if(a == 100 || b == 100 || c == 100)
		return 0.0;
	if(dp[a][b][c] > -0.9)
		return dp[a][b][c];
	if(a == 0 && b == 0)
		return dp[a][b][c] = (double)c/(a+b+c) * (solve(a,b,c+1)+1);
	if(a == 0 && c == 0)
		return dp[a][b][c] = (double)b/(a+b+c) * (solve(a,b+1,c)+1);
	if(b == 0 && c == 0)
		return dp[a][b][c] = (double)a/(a+b+c) * (solve(a+1,b,c)+1);
	if(a == 0 && b && c)
		return dp[a][b][c] = (double)c/(a+b+c) * (solve(a,b,c+1)+1)+(double)b/(a+b+c) * (solve(a,b+1,c)+1);
	if(b == 0 && a && c)
		return dp[a][b][c] = (double)c/(a+b+c) * (solve(a,b,c+1)+1)+(double)a/(a+b+c) * (solve(a+1,b,c)+1);
	if(c == 0 && b && a)
		return dp[a][b][c] = (double)a/(a+b+c) * (solve(a+1,b,c)+1)+(double)b/(a+b+c) * (solve(a,b+1,c)+1);
	return dp[a][b][c] = (double)a/(a+b+c)*(solve(a+1,b,c)+1) + (double)b/(a+b+c)*(solve(a,b+1,c)+1) + (double)c/(a+b+c) * (solve(a,b,c+1)+1);
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int a,b,c;
	cin >> a >> b >> c;
	for(int i = 0; i < N;++i){
		for(int j = 0; j < N;++j){
			for(int k = 0; k < N;++k){
				dp[i][j][k] = -2;
			}
		}
	}
	double ans = solve(a,b,c);
	cout << fixed << setprecision(9) << ans << "\n";
}
