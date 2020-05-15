#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,m;
        cin >> n >> m;
        if(n == 1)
            cout << "0\n";
        else if(n == 2)
            cout << m << "\n";
        else if(n%2)
        {
            ll num = (n-1)/2;
            ll rem = m%num;
            m -= rem;
            ll div = m/num;
            ll ans = num*div * 2;
            ans += (rem * 2);
            cout << ans << "\n";
        }
        else
        {
            ll num = n/2-1;
            ll rem = m%num;
            m -= rem;
            ll div = m/num;
            ll ans = num*div*2;
            ans += (2*rem);
            cout << ans << "\n";
        }
    }
}
