#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<ll,ll> pairs;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,d;
    cin >> n >> d;
    vector<pairs > v;
    for(int i=0;i<n;i++)
    {
        ll m,s;
        cin >> m >> s;
        pairs p = make_pair(m,s);
        v.push_back(p);
    }
    sort(v.begin(),v.end());
    ll ans = 0;
    ll cur_sum = 0;
    ll start;
    int i=0;
    int j = 0;
    while(i < n)
    {
        start = v[i].first;
        while(j < n && v[j].first - start < d)
        {
            cur_sum += v[j].second;
            j++;
        }
        ans = max(ans,cur_sum);
        cur_sum = cur_sum - v[i].second;
        i++;
    }
    cout << ans;
}
