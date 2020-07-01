#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 1e14;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    ll c[n+1];
    for(int i=1;i<=n;i++){
        cin >> c[i];
    }
    string s[n+1],rs[n+1];
    for(int i=1;i<=n;i++){
        cin >> s[i];
        rs[i] = string(s[i].rbegin(),s[i].rend());
    }
    ll dp[n+1][2];
    for(int i=0;i<=n;i++)
        dp[i][0] = dp[i][1] = INF;
    dp[1][0] = 0;
    dp[1][1] = c[1];
    for(int i=2;i<=n;i++){
        if(s[i] >= s[i-1]){
            dp[i][0] = min(dp[i-1][0],dp[i][0]);
        }
        if(s[i] >= rs[i-1])
            dp[i][0] = min(dp[i][0],dp[i-1][1]);
        if(rs[i] >= s[i-1]) 
            dp[i][1] = min(dp[i-1][0]+c[i],dp[i][1]);
        if(rs[i] >= rs[i-1])
            dp[i][1] = min(dp[i-1][1]+c[i],dp[i][1]);
    }
    ll ans = min(dp[n][0],dp[n][1]);
    if(ans == INF)
        ans = -1;
    cout << ans << "\n";
}