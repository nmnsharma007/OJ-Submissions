#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 100000000000;
int main()
{
    int N,W;
    cin >> N >> W;
    ll w[N+1],v[N+1];
    ll V = 0;
    for(int i=1;i<=N;i++){
        cin >> w[i] >> v[i];
        V += v[i];
    }
    ll dp[N+1][V+1];//dp[i][j] is minimum weight with value j and i items
    for(int i=0;i<=N;i++){
        for(int j=0;j<=V;j++)
            dp[i][j] = INF;
    }
    for(int i=0;i<=N;i++)
        dp[i][0] = 0;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=V;j++){
            if(j-v[i] >= 0)
                dp[i][j] = min(dp[i-1][j-v[i]]+w[i],dp[i-1][j]);
            else
                dp[i][j] = dp[i-1][j];
        }
    }
    ll ans = 0;
    for(ll i=1;i<=V;i++){
        if(dp[N][i] <= W)
            ans = max(ans,i);
    }
    cout << ans << "\n";
}