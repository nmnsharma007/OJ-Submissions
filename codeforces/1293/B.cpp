#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n;
    cin >> n;
    double ans = 0;
    for(int i=1;i<=n;i++){
        double temp = i;
        ans += 1.0/temp;
    }
    printf("%.12f\n",ans);
}