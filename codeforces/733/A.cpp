#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.length();
    int cur_count;
    int prev = -1;
    int ans = 1;
    int i = 0;
    while(i<n)
    {
        if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y')
        {
            cur_count = i-prev;
            prev = i;
            ans = max(cur_count,ans);
        }
        else if(i == n-1)
        {
            cur_count = i-prev+1;
            ans = max(cur_count,ans);
        }
        i++;
    }
    cout << ans;
}