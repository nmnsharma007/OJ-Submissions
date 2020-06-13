#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int n,x;
    cin >> n >> x;
    ll arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    sort(arr,arr+n);
    ll ans = 0;
    x++;
    for(int i=0;i<n;i++)
    {
        x = max(x-1,1);
        ans += x*arr[i];
    }
    cout << ans << "\n";
}