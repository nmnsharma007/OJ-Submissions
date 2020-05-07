#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll inf  = 1e18;
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
        ll maximum = -inf;
        ll dif = 0;
        for(int i=0;i<n;i++)
        {
            if(maximum > arr[i])
                dif = max(maximum-arr[i],dif);
            maximum = max(maximum,arr[i]);
        }
        ll ans = 0;
        if(dif)
        {
            ans = log2(dif);
            if(pow(2,ans+1) <= dif)
                ans++;
            ans++;
        }
        cout << ans << "\n";
    }
}