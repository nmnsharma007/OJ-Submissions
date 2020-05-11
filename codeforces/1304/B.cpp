#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    set<string> s1;
    vector<string> left,right;
    string mid = "";
    string str[n];
    for(int i=0;i<n;i++)
    {
        string s;
        cin >> s;
        s1.insert(s);
        str[i] = s;
    }
    for(int i=0;i<n;i++)
    {
        string s = str[i];
        string temp = s;
        reverse(temp.begin(),temp.end());
        if(temp == s)
            mid = s;
        else
        {
            if(s1.find(temp) != s1.end())
            {
                left.push_back(s);
                right.push_back(temp);
                s1.erase(s);
                s1.erase(temp);
            }
        }
    }
    cout << left.size() * m * 2 + mid.length() << "\n";
    for(string x : left)
        cout << x;
    cout << mid;
    reverse(right.begin(), right.end());
    for(string x:right)
        cout << x;
}
