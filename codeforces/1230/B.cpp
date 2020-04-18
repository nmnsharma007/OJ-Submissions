#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    string s;
    cin >> n >> k;
    cin >> s;
    if(s[0] != '1' && n != 1 && k)
    {
        s[0] = '1';
        k--;
    }
    else if(s[0] != '0' && n == 1 && k)
    {
        s = "0";
        k--;
    }
    int i = 1;
    int j = 1;
    while(i <= k && j < n)
    {
        if(s[j] != '0')
        {
            i++;
            s[j] = '0';
        }
        j++;
    }
    cout << s;
}