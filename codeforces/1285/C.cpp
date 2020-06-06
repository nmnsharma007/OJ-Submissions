#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll x;
    cin >> x;
    ll a=x,b=x;
    for(ll i=1;i*i<=x;i++)
    {
        if(x%i == 0)
        {
            ll lcm = (i*(x/i))/(__gcd(i,x/i));
            if(lcm == x)
            {
                if(b >=x/i)
                {
                    b = x/i;
                    a = i;
                }
            }
        }
    }
    cout << a << " " << b << "\n";
}