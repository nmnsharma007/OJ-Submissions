#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin >> n >> x;
    vector<pair<int,int> > v;
    for(int i=0;i<n;i++){
        int l,r;
        cin >> l >> r;
        v.push_back({l,r});
    }
    sort(v.begin(),v.end());
    int ans = (v[0].first-1)%x;
    ans += v[0].second-v[0].first+1;
    for(int i=1;i<n;i++){
        ans += v[i].second-v[i].first+1;
        ans += (v[i].first-v[i-1].second-1)%x;
    }
    cout << ans << "\n";
}