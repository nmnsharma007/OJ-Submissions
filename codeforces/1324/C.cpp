#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string s;
    while(t--)
    {
        cin >> s;
        int cur_dist = 1;
        int ans = 1;
        int n = s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i] == 'L')
                cur_dist++;
            else
            {
                ans = max(ans,cur_dist);
                cur_dist = 1;
            }
        }
        ans = max(ans,cur_dist);
        cout << ans << "\n";
    }
}