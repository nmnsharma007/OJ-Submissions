#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    scanf("%d",&q);
    while(q--){
        int n,m;
        scanf("%d%d",&n,&m);
        int temperature = m;
        int time[n],lower[n],higher[n];
        for(int i=0;i < n;i++){
            scanf("%d%d%d",&time[i],&lower[i],&higher[i]);
        }
        int mx = m,mn = m;
        int prev = 0;
        int flag = 1;
        for(int i=0;i < n;i++){
            int l = mn - (time[i]-prev);
            int u = mx + (time[i]-prev);
            if(u < lower[i] || l > higher[i]){
                flag = 0;
                break;
            }
            mn = max(l,lower[i]);
            mx = min(u,higher[i]);
            prev = time[i];
        }
        if(flag)
            puts("YES");
        else
            puts("NO");
    }
}