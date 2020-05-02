#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while(q--)
    {
        int a,b,n,s;
        cin >> a >> b >> n >> s;
        if(s/n <= a)
        {
            int x = s/n;
            s = s - (n*x);
            if(s<=b)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else
        {
            s = s - (a*n);
            if(s<=b)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
}