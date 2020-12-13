#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e3+5;
int dp[N][N];

int solve(int a[],int b[],int i,int j,int n,int m)
{
	if(i == n)
		return m-j;
	if(j == m)
		return n-i;
	if(dp[i][j] != -1)
		return dp[i][j];
	if(a[i] == b[j])
		return dp[i][j] = solve(a,b,i+1,j+1,n,m);
	return dp[i][j] = min(solve(a,b,i+1,j,n,m),min(solve(a,b,i,j+1,n,m),solve(a,b,i+1,j+1,n,m))) + 1;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	memset(dp,-1,sizeof(dp));
	int n,m;
	cin >> n >> m;
	int a[n],b[m];
	for(int i = 0; i < n;++i){
		cin >> a[i];
	}
	for(int i = 0; i < m;++i){
		cin >> b[i];
	}
	int ans = solve(a,b,0,0,n,m);
	cout << ans << "\n";
}
