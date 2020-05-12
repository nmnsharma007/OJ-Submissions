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
        ll ans = 0;
        if(n%2==0)
        {
            ans = n + 2*k;
            cout << ans << "\n";
        }
        else
        {
            k--;
            ll factor;
            for(ll i=2;i<=n;i++)
            {
                if(n%i == 0)
                {
                    factor = i;
                    break;
                }
            }
            ll ans  = n + factor;
            ans += 2*k;
            cout << ans << "\n";
        }
        
    }
}