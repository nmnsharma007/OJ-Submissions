#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,y1,x2,y2,x3,y3,x4,y4;
    cin >> x1 >> y1 >> x2 >> y2;
    int dist = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
    if(x1 - x2 == 0|| y1-y2 == 0 || (x1-x2) == (y1-y2) || x1 - x2 == y2 - y1)
    {
        if(x1 - x2 == 0 && y1 != y2)
        {
            x3 = x1 - dist;
            y3 = y1;
            x4 = x2 - dist;
            y4 = y2;
        }
        else if(y1 - y2 == 0 && x1 != x2)
        {
            y3 = y1 - dist;
            y4 = y2 - dist;
            x3 = x1;
            x4 = x2;
        }
        else if(x1 != x2 && y1 != y2)
        {
            if(x1 - x2 == y1 - y2)
            {
                x3 = x2;
                y3 = y1;
                x4 = x1;
                y4 = y2;
            }
            else if(x1 - x2 == y2 - y1)
            {
                x3 = x2;
                y3 = y1;
                x4 = x1;
                y4 = y2;
            }
        }
        cout << x3 << " " << y3 << " " << x4 << " " << y4;
    }
    else
    {
        cout << "-1";
    }
    
}