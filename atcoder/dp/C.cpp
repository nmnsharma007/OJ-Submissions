#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n+1],b[n+1],c[n+1];
    int dp[n+1][3];
    for(int i=1;i<=n;i++)
        cin >> a[i] >> b[i] >> c[i];
    dp[1][0] = a[1];
    dp[1][1] = b[1];
    dp[1][2] = c[1];
    for(int i=2;i<=n;i++){
        dp[i][0] = max(dp[i-1][1]+a[i],dp[i-1][2]+a[i]);
        dp[i][1] = max(dp[i-1][0]+b[i],dp[i-1][2]+b[i]);
        dp[i][2] = max(dp[i-1][0]+c[i],dp[i-1][1]+c[i]);
    }
    cout << max(dp[n][0],max(dp[n][1],dp[n][2])) << "\n";
}