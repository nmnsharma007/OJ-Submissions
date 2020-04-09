#include<iostream>
using namespace std;
int main()
{
    int t,s;
    cin >> t;
    while(t--)
    {
        cin >> s;
        long long int ans = 0;
        int x = 1;
        while(x)
        {
            if(s < 10)
            {
                ans += s;
                break;
            }
            x = s - s%10;
            ans += x;
            s = s%10+x/10;
        }
        cout << ans << "\n";
    }
}
