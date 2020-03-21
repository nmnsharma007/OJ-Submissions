#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,m;
    cin >> n;
    int x[n];
    for(int i = 0; i < n;i++)
    {
        cin >> x[i];
    }
    sort(x,x+n);
    cin >> q;
    while(q--)
    {
        int l = 0;
        int r = n-1;
        int ans;
        cin >> m;
        cout << upper_bound(x,x+n,m) - x<< "\n";
    }
}
