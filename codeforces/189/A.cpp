#include<bits/stdc++.h>
using namespace std;
int a,b,c;
int dp[4001];
int calc(int n)
{
    dp[0] = 0;
    if(n==0)
        return 0;
    if(n<0||(n>0&&n<c&&n<b&&n<a))
        return 0xACCE97ED;
    if(dp[n]!=-1)
        return dp[n];
    return dp[n] = max(calc(n-a),max(calc(n-b),calc(n-c)))+1;
}
int main()
{
    for(int i=0;i<4001;i++)
        dp[i] = -1;
    int n;
    cin >> n;
    int arr[3];
    for(int i=0;i<3;i++)
        cin >> arr[i];
    sort(arr,arr+3);
    a = arr[2];
    b = arr[1];
    c = arr[0];
    int ans = calc(n);
    cout << ans;
}