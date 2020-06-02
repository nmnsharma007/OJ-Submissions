#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    vector<pair<int,int> > v;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin >> x;
        v.push_back(make_pair(x,i));
    }
    sort(v.begin(),v.end());
    vector<int> ans;
    for(int i=0;i<n;i++)
    {
        if(v[i].first <= k)
        {
            k -= v[i].first;
            ans.push_back(v[i].second);
        }
    }
    cout << ans.size() << "\n";
    for(int i=0;i<ans.size();i++)
        cout << ans[i] << " ";
} 