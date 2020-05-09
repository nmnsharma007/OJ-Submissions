#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t,n,d;
    cin >> t;
    while(t--)
    {
        cin >> n >> d;
        if(d <= n)
            cout << "YES\n";
        else
        {
            ll temp = pow(n-1,2) - 4*(d-n);
            if(temp >= 0)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
}
