#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    if( m == 1 && n == 1)
        cout << "1\n";
    else if(n%2 == 0)
    {
        if(m > n/2)
            cout << m-1 << "\n";
        else if(m < n/2)
            cout << m+1 << "\n";
        else
            cout << m+1 << "\n";
    }
    else
    {
        int num = (n+1)/2;
        if(m >= num)
            cout << m-1 << "\n";
        else
            cout << m+1 << "\n";
    }
}
