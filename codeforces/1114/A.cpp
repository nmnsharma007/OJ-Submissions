#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z,a,b,c;
    cin >> x >> y >> z;
    cin >> a>> b >> c;
    if(a >= x)
    {
        a -= x;
        if(a+b >= y)
        {
            int temp = a+b-y;
            int sum = temp + c;
            if(sum>=z)
                cout << "YES";
            else
                cout << "NO";

        }
        else
            cout << "NO";
    }
    else
        cout << "NO";
}