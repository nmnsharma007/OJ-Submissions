#include<bits/stdc++.h>
using namespace std;
#define neg_infinity std::numeric_limits<float>::infinity()
int main()
{
    double n,dy,dx,slope,x0,y0;
    cin >> n >> x0 >> y0;
    set<double> s;
    for(int i=0;i<n;i++)
    {
        double x,y;
        cin >> x >> y;
        dy = y-y0;
        dx = x - x0;
        slope = dy/dx;
        if(slope == neg_infinity)
            s.insert(-slope);
        else
            s.insert(slope);
    }
    cout << s.size();
}