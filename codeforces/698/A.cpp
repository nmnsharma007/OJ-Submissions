#include<bits/stdc++.h>
using namespace std;
int dp[101][3];
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    for(int i=0;i<101;i++)
        dp[i][0] = dp[i][1] = dp[i][2] = 10001;
    dp[0][0] = 1;
    if(arr[0] == 1 || arr[0] == 3)
        dp[0][1] = 0;
    if(arr[0] == 2 || arr[0] == 3)
        dp[0][2] = 0;
    for(int i=1;i<n;i++)
    {
        dp[i][0] = 1 + min(dp[i-1][0],min(dp[i-1][1],dp[i-1][2]));
        if(arr[i] == 1 || arr[i] == 3)
            dp[i][1] = min(dp[i-1][0],dp[i-1][2]);
        if(arr[i] == 2 || arr[i] == 3)
            dp[i][2] = min(dp[i-1][0],dp[i-1][1]);
    }
    cout << min(dp[n-1][0],min(dp[n-1][1],dp[n-1][2]));
}