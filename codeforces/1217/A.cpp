#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while(t--){
        ll s,i,e;
        ll ans = 0;
        cin >> s >> i >> e;
        ll temp = max(0LL,(e+i-s+2)/2LL);
        ans = max(0LL,e-temp+1);
        cout << ans << "\n";
    }
}