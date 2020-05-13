#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int ans,a,b;
        cin >> a >> b;
        ans = a * floor(log10(b+1));
        cout << ans << "\n";
    }
}