#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string temp = s;
    int flag1=0,flag2=0;
    int n = s.length();
    for(int i=0;i<n-1;i++)
    {
        if(temp[i] == 'A' && temp[i+1] == 'B')
        {
            temp[i] = '-';
            temp[i+1] = '-';
            flag1 = 1;
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(temp[i] == 'B' && temp[i+1] == 'A')
        {
            flag2 = 1;
            break;
        }
    }
    if(flag1==0||flag2==0)
    {
        flag1 = 0;
        flag2 = 0;
        for(int i=0;i<n-1;i++)
    {
        if(s[i] == 'B' && s[i+1] == 'A')
        {
            s[i] = '-';
            s[i+1] = '-';
            flag1 = 1;
            break;
        }
    }
    for(int i=0;i<n-1;i++)
    {
        if(s[i] == 'A' && s[i+1] == 'B')
        {
            flag2 = 1;
            break;
        }
    }
    }
    if(flag1&&flag2)
        cout << "YES";
    else
        cout << "NO";
}
