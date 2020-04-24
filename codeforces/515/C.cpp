#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    int x;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        x = a[i] - '0';
        if(x == 2)
        {
            v.push_back(2);
        }
        else if(x == 3)
        {
            v.push_back(3);
        }
        else if(x == 4)
        {
            v.push_back(3);
            v.push_back(2);
            v.push_back(2);
        }
        else if(x == 5)
        {
            v.push_back(5);
        }
        else if(x == 6)
        {
            v.push_back(5);
            v.push_back(3);
        }
        else if(x == 7)
        {
            v.push_back(7);
        }
        else if(x == 8)
        {
            v.push_back(7);
            v.push_back(2);
            v.push_back(2);
            v.push_back(2);
        }
        else if(x == 9)
        {
            v.push_back(7);
            v.push_back(3);
            v.push_back(3);
            v.push_back(2);
        }
    }
    sort(v.begin(),v.end(),greater<>());
    for(int i=0;i<v.size();i++)
    {
        cout << v[i];
    }
}
