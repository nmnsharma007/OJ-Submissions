#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<int,int> > v;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin >> a >> b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(),v.end());
    int ans = min(v[0].first,v[0].second);
    for(int i=1;i<v.size();i++)
    {
        int temp = min(v[i].first,v[i].second);
        if(temp >= ans)
            ans = temp;
        else
            ans = v[i].first;
    }
    cout << ans;
}