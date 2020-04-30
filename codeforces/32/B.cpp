#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.length();
    string ans = "";
    int i=0;
    while(i < n)
    {
        if(s[i] == '.')
        {
            ans += "0";
            i++;
        }
        else if(i+1<n && s[i] == '-' && s[i+1] == '.')
        {
            ans += "1";
            i += 2;
        }
        else if(i+1<n && s[i] == '-' && s[i+1] == '-')
        {
            ans += "2";
            i+=2;
        }
    }
    cout << ans;
}