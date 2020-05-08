#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
ll rem(ll a,ll b)
{
    if(a >= 0)
        return a%b;
    return ((a%b)+b)%b;
}
int main()
{
    ll n,x,y;
    cin >> x >> y;
    cin >> n;
    ll arr[] = {x,y,y-x,-x,-y,x-y};
    ll ans = arr[(n-1)%6];
    ans = rem(ans,mod);
    cout << ans;
}
