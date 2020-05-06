#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b;
    cin >> n >> m >> a >> b;
    if(m > n)
        cout << min(b,a*n);
    else
    {
        int div = n/m;
        int ans = b*(div+1);
        for(int i=div;i>=0;i--)
        {
            ans = min(ans,a*n+(b-a*m)*i);
        }
        cout << ans;
    }
}