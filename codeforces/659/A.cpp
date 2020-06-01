#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    cin >> n >> a >> b;
    int pos_change = b%n;
    if(b >= 0)
        cout << (a-1+pos_change)%n+1;
    else
        cout << ((a-1+pos_change)%n+n)%n +1;
}