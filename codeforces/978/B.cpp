#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s,ans = "";
    cin >> n;
    cin >> s;
    int count;
    int i = 0;
    while(i < n)
    {
        if(s[i] == 'x')
        {
            count = 0;
            while(s[i] == 'x')
            {
                i++;
                count++;
            }
            if(count <= 2)
            {
                for(int j = 0; j < count;j++)
                {
                    ans += s[j];
                }
            }
            else
            {
                ans += "xx";
            }
        }
        else
        {
            ans += s[i];
            i++;
        }
    }
    cout << s.length() - ans.length();
}