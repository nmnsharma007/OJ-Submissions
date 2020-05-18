#include<bits/stdc++.h>
using namespace std;
#define PI 3.14159265
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        double n;
        cin >> n;
        double angle1 = (PI/n)/4.0;
        double angle2 = 2*angle1;
        double ans = cos(angle1);
        ans /= sin(angle2);
        printf("%.15f\n",ans);
    }
}