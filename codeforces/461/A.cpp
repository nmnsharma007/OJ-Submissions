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
    ll sum[n];
    sum[n-1] = arr[n-1];
    for(int i=n-2;i>=0;i--)
        sum[i] = sum[i+1] + arr[i];
    ll ans = sum[0];
    for(int i=0;i<n-1;i++)
        ans += sum[i];
    cout << ans;
}