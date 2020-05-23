#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s;
     cin >> s;
     int n = s.length();
     if(s[0] >= 'A' && s[0] <= 'Z')
     {
         int flag = 0;
         for(int i=1;i<n;i++)
         {
             if(s[i] <= 'z' && s[i] >= 'a')
                {
                    flag = 1;
                    break;
                }
         }
         if(flag)
            cout << s << "\n";
         else
         {
             for(int i=0;i<n;i++)
             {
                 if(s[i] <= 'Z' && s[i] >= 'A')
                    s[i] = s[i] + 32;
             }
             cout << s << "\n";
         }
     }
     else
     {
         int flag = 0;
         for(int i=1;i<n;i++)
         {
             if(s[i] <= 'z' && s[i] >= 'a')
             {
                 flag = 1;
                 break;
             }
         }
         if(!flag)
         {
             s[0] = s[0] - 32;
             for(int i=1;i<n;i++)
             {
                 if(s[i] >= 'A' && s[i] <= 'Z')
                    s[i] = s[i] + 32;
             }
         }
         cout << s << "\n";
     }
}
