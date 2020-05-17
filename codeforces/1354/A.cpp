#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    ll a,b,c,d,t;
    cin >> t;
    while(t--)
    {
        cin >> a >> b >> c >> d;
        if(b >= a)
            cout << b << "\n";
        else if(a > b && d >= c)
            cout << "-1\n";
        else
        {
            ll rest = a-b;
            ll ans = b;
            ll div = c-d;
            ans += (rest/div) * c;
            if(rest%div)
                ans += c;
            cout << ans << "\n";
        }
        
    }
}