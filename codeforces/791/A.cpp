#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    int r = 1;
    while(true)
    {
        int value1 = pow(3,r) * a;
        int value2 = pow(2,r) * b;
        if(value1 > value2)
        {
            cout << r << "\n";
            return 0;
        }
        r++;
    }
}