#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x;
    vector<int> neg,pos,zer;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        if(x < 0)
            neg.push_back(x);
        else if(x > 0)
            pos.push_back(x);
        else
            zer.push_back(x);
    }
    if(pos.empty())
    {
        int len = neg.size();
        pos.push_back(neg[len-1]);
        pos.push_back(neg[len-2]);
        neg.pop_back();
        neg.pop_back();
    }
    if(neg.size()%2 == 0)
    {
        zer.push_back(neg[neg.size()-1]);
        neg.pop_back();
    }
    sort(neg.begin(),neg.end());
    sort(pos.begin(),pos.end());
    sort(zer.begin(),zer.end());
    cout << neg.size() << " ";
    for(int i=0;i<neg.size();i++)
        cout << neg[i] << " ";
    cout << "\n";
    cout << pos.size() << " ";
    for(auto x:pos)
        cout << x << " ";
    cout << "\n";
    cout << zer.size() << " ";
    for(auto x:zer)
        cout << x << " ";
}