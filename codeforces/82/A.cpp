#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int r;
    int comp = (n+4)/5;
    for(int i=1;i<=31;i++)
    {
        if(pow(2,i-1) > comp)
        {
            r = pow(2,i-2);
            break;
        }
    }
    int x;
    int value1,value2;
    for(int i=10;i>=6;i--)
    {
        value1 = i*r - 5;
        value2 = (i-1)*r - 4;
        if(n>=value2 && n <= value1)
        {
            x = i-1;
            break;
        }
    }
    if(x==5)
        cout << "Sheldon";
    else if(x==6)
        cout << "Leonard";
    else if(x==7)
        cout << "Penny";
    else if(x==8)
        cout << "Rajesh";
    else if(x==9)
        cout << "Howard";
}
