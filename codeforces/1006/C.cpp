#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int n;
    cin >> n;
    vector<ll> pref(n+1);
    pref[0] = 0;
    for(int i=1;i<=n;i++)
    {
        ll x;
        cin >> x;
        pref[i] = x + pref[i-1];
    }
    ll tot = pref[n];
    ll ans = 0;
    for(int i=n;i>0;i--)
    {
        ll temp = tot-pref[i-1];
        int index = lower_bound(pref.begin(),pref.end(),temp)-pref.begin();
        if(index >= i || pref[index] != temp)
            continue;
        ans = max(ans,temp);
    }
    cout << ans << "\n";
}