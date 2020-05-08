#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007;
ll n,k,d;
ll dp[10001][2];
ll no_of_ways(ll sum,int check)
{
    if(sum > n)
        return 0;
    if(sum == n && check==0)
        return 0;
    if(sum==n && check == 1)
        return 1;
    if(dp[sum][check] != -1)
        return dp[sum][check];
    ll ans = 0;
    for(int i=1;i<=k;i++)
    {
        if(i < d && check==1)
        {
            ans = (ans + no_of_ways(sum+i,1))%MOD;
        }
        else if(i < d && check==0)
        {  
             ans = (ans + no_of_ways(sum+i,0))%MOD;
        }
        else
            ans = (ans + no_of_ways(sum+i,1))%MOD;
    }
    dp[sum][check] = ans%MOD;
    return dp[sum][check];
    
}
int main()
{
    for(int i=0;i<=10000;i++)
        dp[i][0] = dp[i][1] = -1;
    cin >> n >> k >> d;
    ll ans = no_of_ways(0,0);
    cout << ans;
}
