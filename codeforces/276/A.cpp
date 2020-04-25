#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    int t[n],f[n];
    vector<int> v;
    int ans = -10000000001;
    for(int i=0;i<n;i++)
    {
        cin >> f[i] >> t[i];
        if(t[i] <= k)
            ans = max(ans,f[i]);
        else
            ans = max(ans,f[i] - (t[i] - k));
    }
    cout << ans;
}
