#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int flag1 = 0;
        int flag2 = 0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i] == '0')
                flag1 = 1;
            if(s[i] == '1')
                flag2 = 1;
        }
        if(flag1 && flag2)
        {
            for(int i=0;i<2*s.length();i+=2)
            {
                cout << "10";
            }
        }  
        else if(flag1 && !flag2)
        {
            for(int i=0;i<2*s.length();i+=2)
            {
                cout << "00";
            }
        }
        else if(flag2 && !flag1)
        {
            for(int i=0;i<2*s.length();i+=2)
            {
                cout << "11";
            }
        }
        cout << "\n";
    }
}