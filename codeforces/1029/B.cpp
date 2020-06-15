#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int n;
    cin >> n;
    ll arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    int ans = 1;
    int count = 1;
    for(int i=1;i<n;i++){
        if(arr[i] <= 2LL*arr[i-1])
            count++;
        else{
            ans = max(ans,count);
            count = 1;
        }
    }
    ans = max(ans,count);
    cout << ans << "\n";
}