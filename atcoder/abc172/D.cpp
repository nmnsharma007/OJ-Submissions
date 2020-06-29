#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;
    ll ans = 0;
    for(ll i=1;i<=n;i++){
        ll count = n/i;
        ans = ans + ((count+1)*count*i)/2LL;
    }
    cout << ans << "\n";
}