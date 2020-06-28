#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int n;
    cin >> n;
    ll arr[n+1];
    vector<pair<ll,int> > v;
    for(int i=1;i<=n;i++){
        cin >> arr[i];
        v.push_back({i-arr[i],arr[i]});
    }
    sort(v.begin(),v.end());
    ll ans = v[0].second;
    ll sum = v[0].second;
    for(int i=1;i<(int)v.size();i++){
        if(v[i].first == v[i-1].first)
            sum += v[i].second;
        else{
            ans = max(ans,sum);
            sum = v[i].second;
        }
    }
    ans = max(ans,sum);
    cout << ans << "\n";
}