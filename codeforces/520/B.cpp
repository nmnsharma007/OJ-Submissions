#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    if(n>= m)
        cout << n-m;
    else
    {
        int count = 0;
        while(m>n)
        {
            if(m%2)
                m++;
            else
                m /=2;
            count++;
        }
        cout << count + abs(n-m);
    }
}