#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<int,string> > v;
    set<string> names;
    for(int i=0;i<n;i++)
    {
        string s;
        int x;
        cin >> s >> x;
        v.push_back(make_pair(x,s));
        names.insert(s);
    }   
    set<string> :: iterator it;
    vector<pair<int,string>> res;
    vector<pair<int,string> >::iterator its;
    for( it=names.begin();it!=names.end();it++)
    {
        string name = *it;
        int sum = 0;
        for(its=v.begin();its!=v.end();its++)
        {
            if((*its).second == name)
                sum += (*its).first;
        }
        res.push_back(make_pair(sum,name));
    }
    sort(res.begin(),res.end());
    set<string> s1;
    int max_sum = res[res.size()-1].first;
    for(its=res.begin();its!=res.end();its++)
    {
        if((*its).first == max_sum)
            s1.insert((*its).second);
    }
    if(s1.size() == 1)
        cout << *s1.begin();
    else
    {
        vector<pair<int,string> > index;
        for(it=s1.begin();it!=s1.end();it++)
        {
            string name = *it;
            int cur_sum = 0;
            for(int i=0;i<v.size();i++)
            {
                if(v[i].second == name)
                    cur_sum += v[i].first;
                if(cur_sum >= max_sum)
                {
                    index.push_back(make_pair(i,name));
                    break;
                }
            }
        }
        sort(index.begin(),index.end());
        cout << index[0].second;
    }
}