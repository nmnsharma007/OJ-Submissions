#include<iostream>
using namespace std;
int main()
{
    int t,a,b;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        int ans = 0;
        int rem = a % b;
        if(a % b == 0)
            cout << ans << "\n";
        else
            cout << b - rem << "\n";
    }
}
