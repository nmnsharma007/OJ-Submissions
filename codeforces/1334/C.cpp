#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        ll a[n],b[n];
        for(int i=0;i<n;i++)
            cin >> a[i] >> b[i];
        ll sum = max(0LL,a[0] - b[n-1]);
        ll extra_work[n];
        extra_work[0] = max(0LL,a[0]-b[n-1]);
        for(int i=1;i<n;i++)
        {
            sum += max(0LL,a[i] - b[i-1]);
            extra_work[i] = max(0LL,a[i]-b[i-1]);
        }
        //cout <<"sum:" << sum << "\n";
        ll ans = sum-extra_work[0]+a[0];
        for(int i=1;i<n;i++)
           ans = min(ans,sum-extra_work[i]+a[i]);
        //sum = min(sum,sum+b[n-1]);
        cout << ans << "\n";
    }
}