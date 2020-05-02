#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        for(int i=1;i<=9;i++)
        {
            cin >> s;
            for(int j=0;j<s.length();j++)
            {
                if(s[j] == '9')
                    s[j] = '8';
            }
            cout << s << "\n";
        }
    }
}