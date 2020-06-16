#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    int arr[n+1];
    for(int i=1;i<=n;i++)
        cin >> arr[i];
    int dp[n+1];
    for(int i=0;i<=n;i++)
        dp[i] = INT_MAX;
    dp[1] = 0;
    dp[2] = abs(arr[1]-arr[2]);
    for(int i=3;i<=n;i++){
        for(int j=1;j<=k;j++){
            if(i-j>=1){
                dp[i] = min(dp[i],dp[i-j]+abs(arr[i]-arr[i-j]));                
            }
            else
                continue;
        }
    }
    cout << dp[n] << "\n"; 
}