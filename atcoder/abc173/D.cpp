#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int n;
    cin >> n;
    ll arr[n+1];
    for(int i = 1;i <= n;i++){
        cin >> arr[i];
    }
    sort(arr+1,arr+n+1);
    ll ans = arr[n];
    int k = n-1;
    for(int i = n-2; i > 0;i-= 2){
        if(i == 1){
            ans += arr[k];
            break;
        }
        ans = ans + 2LL * arr[k--];
    }
    cout << ans << "\n";
}