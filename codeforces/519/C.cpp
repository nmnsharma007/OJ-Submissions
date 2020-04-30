#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    cout << min(min(n,m),(m+n)/3);
}