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
        int count1 = 0,count2 = 0,count3 = 0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin >> x;
            if(x%3 == 0)
                count3++;
            else if(x%3 == 1)
                count1++;
            else
                count2++;
        }
        int ans = count3;
        ans += min(count2,count1);
        int temp = max(count2,count1) - min(count1,count2);
        ans += temp/3;
        cout << ans << "\n";
    }
}