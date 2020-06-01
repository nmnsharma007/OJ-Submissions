#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        int num_zero = 0,num_one = 0;
        int done_zero = 0, done_one = 0;
        for(int i=0;i<n;i++)
        {
            if(s[i] == '0')
                num_zero++;
            else
                num_one++;
        }
/*        cout << "numone:" << num_one << "\n";
        cout << "numzero:" << num_zero << "\n";*/
        int ans = min(num_zero,num_one);
        for(int i=0;i<n;i++)
        {
            if(s[i] == '0')
                done_zero++;
            else
                done_one++;
         /*   temp = min(abs(done_one+num_zero-done_zero),abs(done_zero+num_one-done_one));
            cout << "temp:" << temp << "\n";
           */
           ans = min(done_one+num_zero-done_zero,ans);
           ans = min(done_zero+num_one-done_one,ans);
        }
        cout << ans << "\n";
    }
}