#include<bits/stdc++.h>
using namespace std;
int main()
{
        int t;
        cin >> t;
        while(t--)
        {
            long long int n;
            cin >> n;
            long long int ans = (n*(n+1))/2;
            int m = log2(n)+1;
            ans = ans + 2 - pow(2,m+1);
            cout << ans << "\n";
        }
}