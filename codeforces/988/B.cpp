#include<bits/stdc++.h>
using namespace std;
bool comp(string a,string b)
{
    return a.length() < b.length();
}
int main()
{
    int n;
    cin >> n;
    string s[n];
    for(int i=0;i<n;i++)    
        cin >> s[i];
    sort(s,s+n,comp);
    int flag = 1;
    int pos = 0;
    for(int i=0;i<n-1;i++)
    {
        if(s[i+1].find(s[i],pos) != string::npos)
            continue;
        else
        {
            flag = 0;
            break;
        }
    }
    if(flag == 0)
        cout << "NO\n";
    else
    {
        cout << "YES\n";
        for(int i=0;i<n;i++)
            cout << s[i] << "\n";
    }
}