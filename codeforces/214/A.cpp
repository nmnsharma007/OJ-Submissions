#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    int count = 0;
    for(int a=0;a<=1000;a++)
    {
        for(int b=0;b<=1000;b++)
        {
            int tmp = pow(a,2) + b;
            int temp = pow(b,2) + a;
            if(tmp == n && temp == m)
                count++;
        }
    }
    cout << count;
}