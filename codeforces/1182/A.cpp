#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n%2==0)
    {
        n /= 2;
        int ans = 1;
        for(int i=1;i<=n;i++)
            ans *= 2;
        cout << ans;
    }
    else
        cout << "0";
}