#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        map<ll,ll> mp;
        ll arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
            if(arr[i]%k)
                mp[k-arr[i]%k]++;
        }
        ll ans = 0;
        ll count = 0;
        ll key = -1;
        for(auto p : mp){
            if(count <= p.second){
                count = p.second;
                key = p.first;
            }
        }
        ans = (count-1)*k + key + 1LL;
        if(key == -1)
            ans = 0;
        cout << ans << "\n";
    }
}