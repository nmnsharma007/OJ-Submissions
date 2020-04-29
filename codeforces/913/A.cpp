#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n;
    cin >> m;
    int i = 1;
    int res = 1;
    while(i<=n)
    {
        res *= 2;
        if(res>m)
            break;
        i++;
    }
    if(res > m)
        cout << m;
    else
    {
        int rem = m%res;
        cout << rem;
    }
    
}