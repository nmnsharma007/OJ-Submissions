#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t,n,k;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        ll count = 0;
        ll ans = k + (k-1)/(n-1);
        cout << ans << "\n";
    }
}