#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,d,x,y,x1,y1,x2,y2;
    cin >> t;
    while(t--)
    {
        cin >> a >> b >> c >> d;
        cin >> x >> y >> x1 >> y1 >> x2 >> y2;
        x += (b-a);
        y += (d-c);
        if(x <= x2 && x >= x1 && y <= y2 && y >= y1 &&(x2>x1 || a+b==0) && (y2>y1 || c+d==0))
            cout << "Yes\n";
        else
        {
            cout << "No\n";
        }
        
    }
}

