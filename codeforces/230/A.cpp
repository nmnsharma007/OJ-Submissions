#include<bits/stdc++.h>
using namespace std;
bool sortbysec(pair<int,int> a,pair<int,int> b)
{
    return (a.second > b.second);
}
int main()
{
    int s,n;
    cin >> s >> n;
    vector<pair<int,int> > v;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin >> x >> y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(),v.end());
    int temp = s;
    int flag = 1;
    for(int i=0;i<n;i++)
    {
        if(temp > v[i].first)
            temp += v[i].second;
        else
        {
            flag = 0;
            break;
        }
    }
    if(flag)
        cout << "YES\n";
    else
        cout << "NO\n";
    /*{
        flag = 1;
        sort(v.begin(),v.end(),sortbysec);
        for(int i=0;i<n;i++)
        {
            if(s > v[i].first)
                s+=v[i].second;
            else
            {
                flag = 0;
                break;
            }
        }
        if(flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }*/
}
