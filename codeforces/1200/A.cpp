#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans="";
    for(int i=0;i<10;i++)
    {
        ans += '0';
    }
    for(int i=0;i<n;i++)
    {
        if(s[i] == 'L')
        {
            for(int k=0;k<10;k++)
            {
                if(ans[k] == '0')
                {
                    ans[k] = '1';
                    break;
                }
            }
        }
        else if(s[i] == 'R')
        {
            for(int k=9;k>=0;k--)
            {
                if(ans[k] == '0')
                {
                    ans[k] = '1';
                    break;
                }
            }
        }
        else
        {
            int temp = s[i] - '0';
            ans[temp] = '0';
        }
    }
    cout << ans;

}