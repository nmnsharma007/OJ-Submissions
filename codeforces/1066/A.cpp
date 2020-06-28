#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int L, v,l,r;
        cin >> L >> v >> l >> r;
        int tot = L/v;
        int lights_before_l = (l-1)/v;
        int lights_before_r = (r/v);
        int ans = tot - (lights_before_r - lights_before_l);
        cout << ans << "\n";
    }
}