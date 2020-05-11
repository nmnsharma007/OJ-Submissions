#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll q;
    cin >> q;
    while(q--)
    {
        ll n,m;
        cin >> n >> m;
        ll arr[11];
        ll sum = 0;
        for(ll i=1;i<=10;i++)
        {
            arr[i] = (m*i) % 10;
            sum += arr[i];
        }
        n = n - n%m;
        ll multiples = n/m;
        ll ans = sum * (multiples/10);
        ll index = multiples % 10;
        for(int i=1;i<=index;i++)
            ans += arr[i];
        cout << ans << "\n";
    }
}
