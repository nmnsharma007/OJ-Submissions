#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e8;
ll n1,n2,k1,k2;
ll dp[110][110][14][14];
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
	for(int i = 0; i <= n1;i++){
		for(int j = 0; j <= n2;j++){
			for(int k = 0; k <= k1;k++){
				for(int l = 0; l <= k2;l++){
					if(i == 0 && j == 0){
						dp[i][j][k][l] = 1;
						continue;
					}
					ll ans = 0;
					if(i > 0 && k > 0)
						ans = (ans + dp[i-1][j][k-1][k2])%MOD;
					if(j > 0 && l > 0)
						ans = (ans + dp[i][j-1][k1][l-1])%MOD;
					dp[i][j][k][l] = ans % MOD;
				}
			}
		}
	}
	cout << dp[n1][n2][k1][k2] << "\n";
}
