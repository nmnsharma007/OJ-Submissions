#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int sgn(int x)
{
    if(x == 0)
        return 0;
    else if(x < 0)
        return -1;
    else if(x > 0)
        return 1;
}
int main()
{
    ll a,b,c;
    cin >> a >> b >> c;
    if(c == 0)
    {
        if(a == b)
            cout << "YES";
        else
            cout << "NO";
    }
    else
    {
        if(a == b)
            cout << "YES";
        else
        {
           if(sgn(b-a) == sgn(c))
           {
               ll dif = abs(b-a);
               ll temp = abs(c);
               if(dif%temp == 0)
                cout << "YES";
               else
                cout << "NO";
           } 
           else
                cout << "NO";
        }
        
    }
}