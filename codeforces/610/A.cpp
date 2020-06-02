#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll n;
    cin >> n;
    if(n%2 == 1 || n < 6)
        cout << "0\n";
    else
    {
        ll m = n/2;
        ll ans = m-1;
        if(m%2 == 0)
            ans--;
        ans /= 2;
        cout << ans << "\n";
    }
}