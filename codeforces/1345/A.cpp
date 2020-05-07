#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,m,n;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        if(m==1||n==1)
            cout << "YES\n";
        else if(m==2&&n==2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
