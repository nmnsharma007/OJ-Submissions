#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int dp[100001];
long long int sum[100001];
int k;
int getAns(int n)
{
    if(n == 0) return 1;
    if(dp[n] != -1)
        return dp[n];
    int ans = 0;
    if(n >= k)
    {
        ans += getAns(n-k);
        ans %= mod;
    }    
        ans += getAns(n-1);
        ans %= mod;
    return dp[n] = ans;
}
void initialize()
{
    for(int i = 1;i <=100000;i++)
    {
        dp[i] = -1;
    }
    sum[0] = 0;
    for(int i = 1;i <=100000;i++)
    {
        sum[i] = sum[i-1] + getAns(i);
        sum[i] %= mod;
    }
}
int main()
{
    //yeah i know i have submitted the same code before thank u for telling me 
    int t,a,b;
    cin >> t >> k;
    initialize();
    while(t--)
    {
        cin >> a >> b;
        long long int ans = (sum[b] - sum[a-1] + mod)%mod;
        ans = ans % mod;
        cout << ans << "\n";
    }
}