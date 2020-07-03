#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int n;
    scanf("%d",&n);
    ll k,x;
    for(int i=0;i<n;i++){
        scanf("%lld%lld",&k,&x);
        ll ans = x + (k-1LL)*9LL;
        printf("%lld\n",ans);
    }
}