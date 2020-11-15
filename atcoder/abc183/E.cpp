#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int h,w;
    cin >> h >> w;
    string grid[h];
    ll dp[h][w],pref_r[h][w],pref_c[h][w],pref_d[h][w];
    memset(dp,0,sizeof(dp));
    memset(pref_r,0,sizeof(pref_r));
    memset(pref_c,0,sizeof(pref_c));
    memset(pref_d,0,sizeof(pref_d));
    dp[0][0] = pref_r[0][0] = pref_c[0][0] = pref_d[0][0] = 1;
    for(int i = 0; i < h;++i){
        cin >> grid[i];
    }
    for(int i = 0; i < h;++i){
        for(int j = 0; j < w;++j){
            if(i == 0 && j == 0)
                continue;
            if(grid[i][j] == '#'){
                continue;
            }
            if(i > 0){
                dp[i][j] = (dp[i][j] + pref_r[i-1][j])%MOD;
                pref_r[i][j] = pref_r[i-1][j];
            }
            if(j > 0){
                dp[i][j] = (dp[i][j] + pref_c[i][j-1])%MOD;
                pref_c[i][j] = pref_c[i][j-1];
            }
            if(i > 0 && j > 0){
                dp[i][j] = (dp[i][j] + pref_d[i-1][j-1])%MOD;
                pref_d[i][j] = pref_d[i-1][j-1];
            }
            pref_r[i][j] = (pref_r[i][j] + dp[i][j])%MOD;
            pref_c[i][j] = (pref_c[i][j] + dp[i][j])%MOD;
            pref_d[i][j] = (pref_d[i][j] + dp[i][j])%MOD;
        }
    }
    cout << dp[h-1][w-1] << "\n";
}