#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll r,l;
    cin >> l >> r;
    if(r-l>=3)
    {
        if(l&1)
            l++;
        cout << l <<" " << l+1 << " " << l+2;
    }
    else if(r-l == 2)
    {
        if(l&1)
            cout << "-1";
        else
            cout << l << " " << l+1 << " " << l+2;
    }
    else
        cout << "-1";
}
