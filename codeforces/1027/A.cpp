#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int start = 0;
        int end = n-1;
        int flag = 1;
        while(start < end)
        {
            if(abs(s[start]-s[end]) == 1 || abs(s[start]-s[end]) > 2)
            {
                flag = 0;
                break;
            }
            start++;
            end--;
        }
        if(flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}