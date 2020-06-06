#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define mod 998244353
int main()
{
    int n,k;
    cin >> n >> k;
    int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    ll ans = 0;
    ll num = 1;
    ll count = 0;
    int flag = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] >= n-k+1)
        {
            ans += arr[i];
            if(flag == 0)
                flag = 1;
            else
            {
                num *= (count+1);
                num %= mod;
            }
            count = 0;
        }
        else
            count++;
    }
    cout << ans << " " << num << "\n";
}