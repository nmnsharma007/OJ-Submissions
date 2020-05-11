#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    sort(arr,arr+n);
    ll ans = 0;
    for(int i=0;i<n;i++)
        ans = ans + abs(arr[i] - (i+1));
    cout << ans;
}
