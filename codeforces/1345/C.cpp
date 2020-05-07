#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        for(int i=0;i<n;i++)
            cin >> arr[i];
        int flag = 1;
        set<ll> s;
        for(int i=0;i<n;i++)
        {
            ll temp = arr[i]+i;
            ll pos = (temp%n+n)%n;
            if(s.find(pos)!=s.end())
            {
                flag = 0;
                break;
            }
            s.insert(pos);
        }
        if(flag==0)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}