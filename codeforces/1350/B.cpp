#include<bits/stdc++.h>
using namespace std;
int n;
int dp[100001];
int arr[100001];
int f(int index)
{
    if(index > n)
        return 0;
    int count = 0;
    if(dp[index] != -1)
        return dp[index];
    for(int i=2*index;i<=n;i+=index)
    {
        if(arr[i] > arr[index])
            count = max(count,1+f(i));
    }
    return dp[index] = count;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i=1;i<=n;i++)
        {
            cin >> arr[i];
            dp[i] = -1;
        }
        int ans = 1;
        for(int i=0;i<=n;i++)
            ans = max(ans,1+f(i));
        cout << ans << "\n";
    }
}