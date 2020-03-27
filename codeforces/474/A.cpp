#include<bits/stdc++.h>
using namespace std;
int main()
{
    char d;
    string s,ans = "";
    char c[3][10] = {'q','w','e','r','t','y', 'u','i','o','p',
                     'a','s','d','f','g','h','j','k','l',';',
                     'z','x','c','v','b','n','m',',','.','/'};
    cin >> d;
    cin >> s;
    int flag;
    for(int i = 0; i < s.length();i++)
    {
        flag = 0;
        if(d == 'L')
        {
            for(int j = 0; j < 3;j++)
            {
                for(int k = 0; k < 10;k++)
                {
                    if(c[j][k] == s[i])
                    {
                        ans += c[j][k+1];
                        flag = 1;
                        break;
                    }
                }
                if(flag)
                    break;
            }
        }
        else
        {
            for(int j = 0; j < 3;j++)
            {
                for(int k = 0; k < 10;k++)
                {
                    if(c[j][k] == s[i])
                    {
                        ans += c[j][k-1];
                        flag = 1;
                        break;
                    }
                }
                if(flag)
                    break;
            }
        }
    }
    cout << ans;
}
