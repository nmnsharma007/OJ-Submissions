#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;

ll solve(int n,int m,int l)
{
	ll dp[n+1][m+1];//dp[i][j] is number of subgraphs possible with i nodes and j edges
	memset(dp,0,sizeof(dp));
	ll C[n+1][n+1];
	memset(C,0,sizeof(C));
	for(int i = 1; i <= n;++i){
		C[i][0] = 1;
		for(int j = 1; j <= i;++j){
			if(j == i)
				C[i][i] = 1;
			else
				C[i][j] = (C[i-1][j-1] + C[i-1][j])%MOD;
		}
	}
	ll fact[n+1];
	fact[0] = 1;
	for(int i = 1; i <= n;++i){
		fact[i] = (fact[i-1] * i)%MOD;
	}
	dp[0][0] = 1;
	for(int nodes = 0; nodes <= n;++nodes){
		for(int edges = 0; edges <= m;++edges){
			for(int size = 1;size <= l;++size){
				if(size == 1 && nodes+1 <= n)
					dp[nodes+1][edges] += dp[nodes][edges]%MOD;
				
				if(size >= 2 && n-nodes >= size && edges+size-1 <= m)
					dp[nodes+size][edges+size-1] += ((((C[n-nodes-1][size-1]*fact[size])%MOD)* 500000004)%MOD * (dp[nodes][edges]%MOD))%MOD;
						
				if(size == 2 && n-nodes >= size && edges + size <= m)
					dp[nodes+2][edges+2] += ((n-nodes-1)%MOD)* (dp[nodes][edges]%MOD)%MOD;
				
				if(size > 2 && n-nodes >= size && edges+size <= m)
					dp[nodes+size][edges+size] += ((((C[n-nodes-1][size-1]*fact[size-1])%MOD)* 500000004)%MOD * (dp[nodes][edges]%MOD))%MOD;
			}
		}
	}
	return dp[n][m]%MOD;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m,l;
	cin >> n >> m >> l;
	cout << (solve(n,m,l)-solve(n,m,l-1)+MOD)%MOD << "\n";
}
