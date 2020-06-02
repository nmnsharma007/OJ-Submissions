#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    if(a == 0 && b == 1)
        cout << "YES\n";
    else if(b == 0 && a == 1)
        cout << "YES\n";
    else if(a == 0 && b == 0)
        cout << "NO\n";
    else if(abs(a-b) <= 1)
        cout << "YES\n";
    else
        cout << "NO\n";
}