#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,m;
    cin >> n >> m;
    ll rem1[5],rem2[5];
    memset(rem1,0,sizeof(rem1));
    memset(rem2,0,sizeof(rem2));
    int temp = n/5;
    int rem;
    for(int i=0;i<5;i++)
        rem1[i] = temp;
    rem = n%5;
    if(rem)
    {
        for(int i=1;i<=rem;i++)
            rem1[i]++;
    }
    temp = m/5;
    rem = m%5;
    for(int i=0;i<5;i++)
        rem2[i] = temp;
    if(rem)
    {
        for(int i=1;i<=rem;i++)
            rem2[i]++;
    }
    ll ans = 0;
    ans = rem1[0] * rem2[0];
    for(int i=1;i<5;i++)
        ans = ans + (rem1[i] * rem2[5-i]);
    cout << ans;
}
