#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr,arr+3);
    ll ans = min((arr[0]+arr[1]+arr[2])/3LL,arr[0]+arr[1]);
    cout << ans << "\n";
}