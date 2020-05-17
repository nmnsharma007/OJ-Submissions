#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,h,m;
    cin >> a >> b >> h >> m;
    double hangle = 30.0*h+(m/2.0);
    double mangle = 6.0*m;
    double theta = abs(hangle - mangle);
    double x = (M_PI * theta)/180.0;
    double ans = sqrt(pow(b,2) + pow(a,2) - 2*a*b*cos(x));
    printf("%.18f",ans);
}