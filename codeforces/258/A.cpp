#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int flag = 0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i] == '0')
        {
            s.erase(s.begin() + i);
            flag = 1;
            break;
        }
    }
    if(!flag)
        s.erase(s.begin());
    cout << s;
}