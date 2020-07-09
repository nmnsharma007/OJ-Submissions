#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll n;
    cin >> n;
    ll arr[n+1];
    map<ll,ll> mp;
    for(int i = 1; i <= n;i++){
        cin >> arr[i];
        mp[arr[i]] = i;
    }
    int m;
    cin >> m;
    ll vas = 0,pet = 0;
    for(int i = 0; i < m;i++){
        int b;
        cin >> b;
        ll pos = mp[b];
        vas += pos;
        pet += n-pos+1;
    }
    cout << vas << " " << pet << "\n";
}