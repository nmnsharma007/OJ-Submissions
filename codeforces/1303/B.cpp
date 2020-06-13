#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n,g,b;
        cin >> n >> g >> b;
        ll temp = (n+1)/2;
        ll div = temp/g;
        ll ans = 0;
        //cout << "temp:" << temp << "\n";
        if(g >= temp)
            ans += n;
        else
        {
            ll div = temp/g;
            ll good_days = div*g;
            ll bad_days = div*b;
            ans = ans + good_days+bad_days;
            ll rem = temp%g;
            if(rem == 0)
            {
                ans -= b;
                bad_days -= b;
            }
            ans += rem;
            if(n-temp > bad_days)
                ans += (n-temp-bad_days);
        }
        cout << ans << "\n";
    }
}