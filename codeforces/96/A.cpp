#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int i = 0;
    int cur_count = 0;
    int max_count = 0;
    int flag1 = 0;
    int flag2 = 0;
    while(i < s.length())
    {
        if(s[i] == '0')
        {
            cur_count = 0;
            while(i < s.length() && s[i] == '0')
            {
                cur_count++;
                i++;
            }
            if(cur_count >= max_count)
                max_count = cur_count;
        }
        i++;
    }
    if(max_count >= 7)
            flag1 = 1;
    i = 0;
    cur_count = 0;
    max_count = 0;
    while(i < s.length())
    {
        if(s[i] == '1')
        {
            cur_count = 0;
            while(i < s.length() && s[i] == '1')
            {
                cur_count++;
                i++;
            }
            if(cur_count >= max_count)
                max_count = cur_count;
        }
        i++;
    }
    if(max_count >= 7)
        flag2 = 1;
    if(flag1 || flag2)
        cout << "YES";
    else
        cout << "NO";
}
