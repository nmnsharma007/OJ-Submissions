#include<bits/stdc++.h>
using namespace std;
#define PI 3.141592
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        double n;
        cin >> n;
        double angle = (90.0/n)* (PI/180.0);
        double ans = 1/tan(angle);
        printf("%.12f\n",ans);
    }
}