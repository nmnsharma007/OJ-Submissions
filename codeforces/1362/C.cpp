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
        ll ans = 0;
        ll i = 1;
        while(n/i)
        {
            ans += n/i;
            i *= 2;
        }
        cout << ans << "\n";
    }
}