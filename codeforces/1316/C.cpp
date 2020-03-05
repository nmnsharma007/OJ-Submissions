#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    long long int n,m,p,fir,sec,x,i;
    cin >> n >> m >> p;
    int flag = 0;
    for( i = 0; i < n;i++)
    {
        cin >> x;
        if(x % p && !flag)
        {
            fir = i;
            flag = 1;
        }
    }
    flag = 0;
    for(i = 0; i < m;i++)
    {
        cin >> x;
        if(x % p && !flag)
        {
            sec = i;
            flag = 1;
        }
    }
    cout << fir + sec << endl;
}
