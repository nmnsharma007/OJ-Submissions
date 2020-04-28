#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.length();
    int i = 0;
    int flag = 1;
    while(i<n)
    {
        if(i < n && i+1 < n && i+2<n && s[i] == '1' && s[i+1] == '4' && s[i+2] == '4')
            i += 3;
        else if(s[i] == '1' && s[i+1] == '4' && i < n && i+1 < n)
            i += 2;
        else if(s[i] == '1')
            i++;
        else
        {
            flag = 0;
            break;
        }
    }
    if(flag)
        cout << "YES";
    else
        cout << "NO";
}