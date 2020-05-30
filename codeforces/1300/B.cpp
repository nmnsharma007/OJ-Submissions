#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        vector<ll> v;
        for(ll i=0;i<2*n;i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        cout << abs(v[n-1] - v[n]) << "\n";
    }
}