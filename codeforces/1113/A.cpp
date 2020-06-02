#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,v;
    cin >> n >> v;
    int i=2;
    int ans = v;
    while(n-i+1 > v)
    {
        ans += i;
        i++;
    }
    if(n-1 <= v)
            ans = n-1;
    cout << ans << "\n";
}