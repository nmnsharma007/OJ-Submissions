#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    vector<vector<int> > v(m+1,vector<int> (n+1));
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin >> v[i][j];
        }
    }
     vector<int> res(n+1,0);
    set<pair<int,int> > s;
    for(int i=1;i<=m;i++)
    {
        int max_votes = 0;
        int index;
        for(int j=n;j>0;j--)
        {
            if(max_votes <= v[i][j])
            {
                max_votes = v[i][j];
                index = j;
            }
        }
        res[index]++;
    }
    int ans = 10000000;
    int max_no = 0;
    for(int i=n;i>0;i--)
    {
        if(res[i]  >= max_no)
        {
            max_no = res[i];
            ans = i;
        }
    }
    cout << ans;
}