#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int R,G,B;
	cin >> R >> G >> B;
	int r[R+1],g[G+1],b[B+1];
	for(int i = 1; i <= R;++i){
		cin >> r[i];
	}
	for(int i = 1; i <= G;++i){
		cin >> g[i];
	}
	for(int i = 1; i <= B;++i){
		cin >> b[i];
	}
	sort(r+1,r+R+1,greater<int>());
	sort(g+1,g+G+1,greater<int>());
	sort(b+1,b+B+1,greater<int>());
	int dp[R+1][G+1][B+1];//dp[i][j][k] is maximum area when first i pairs of red,j pair of green and first k pairs of blue sticks are taken
	memset(dp,0,sizeof(dp));
	for(int i = 0; i <= R;++i){
		for(int j = 0; j <= G;++j){
			for(int k = 0; k <= B;++k){
				if(i == 0 && j == 0 && k == 0)
					continue;
				if((i == 0 && j == 0 && k) || (i == 0 && j && k == 0) || (i && j == 0 && k == 0)){
					dp[i][j][k] = 0;
					continue;
				}
				if(i == 0)
					dp[i][j][k] = max(dp[i][j][k],g[j] * b[k] + dp[i][j-1][k-1]);
				else if(j == 0)
					dp[i][j][k] = max(dp[i][j][k],r[i] * b[k] + dp[i-1][j][k-1]);
				else if(k == 0)
					dp[i][j][k] = max(dp[i][j][k],r[i] * g[j] + dp[i-1][j-1][k]);
				else
					dp[i][j][k] = max(dp[i][j][k],max(r[i]*g[j]+dp[i-1][j-1][k],max(r[i]*b[k]+dp[i-1][j][k-1],g[j] * b[k]+dp[i][j-1][k-1])));
			}
		}
	}
	int ans = 0;
	for(int i = 0; i <= R;++i){
		for(int j = 0; j <= G;++j){
			for(int k = 0; k <= B;++k){
				ans = max(ans,dp[i][j][k]);
			}
		}
	}
	cout << ans << "\n"	;
}
