#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<pair<int,int> > v;
        pair<int,int> cur = make_pair(0,0);
        for(int i=0;i<n;i++)
        {
            int x,y;
            cin >> x >> y;
            v.push_back(make_pair(x,y));
        }
        string ans = "";
        sort(v.begin(),v.end());
        int flag = 1;
        for(int i=0;i<n;i++)
        {
            int r = v[i].first-cur.first;
            int u = v[i].second-cur.second;
            if(r < 0 || u < 0)
            {
                flag = 0;
                break;
            }
            ans += string(r,'R');
            ans += string(u,'U');
            cur = v[i];
        }
        if(flag)
        {
            cout << "YES\n";
            cout << ans << "\n";
        }
        else
            cout << "NO\n";
    }
}