#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int n,m;
    cin >> n >> m;
    ll a[n+1],b[m];
    vector<ll> pref_sum(n+1);
    pref_sum[0] = 0;
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
        pref_sum[i] = a[i] + pref_sum[i-1];
    }
    for(int i=0;i<m;i++)
        cin >> b[i];
    for(int i=0;i<m;i++)
    {
        ll temp = b[i];
        ll index = lower_bound(pref_sum.begin(),pref_sum.end(),temp) - pref_sum.begin();
        temp -= pref_sum[index-1];
        cout << index << " " << temp << "\n";
    }
}