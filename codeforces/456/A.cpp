#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<int,int> > v;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin >> x >> y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(),v.end());
    int flag = 0;
    for(int i=1;i<n;i++)
    {
        if(v[i].second < v[i-1].second)
        {
            flag = 1;
            break;
        }
    }
    if(flag)
        cout << "Happy Alex";
    else
        cout << "Poor Alex";
}
