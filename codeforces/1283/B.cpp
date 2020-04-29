#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        int rem = n % k;
        n = n - rem;
        cout << n + min(k/2,rem) << "\n";
    }
}