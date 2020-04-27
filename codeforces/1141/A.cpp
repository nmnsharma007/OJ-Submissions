#include<bits/stdc++.h>
using namespace std;
int calc(int n,int k)
{
    int count = 0;
    while(n%k == 0)
    {
        n /= k;
        count++;
    }
    return count;
}
int main()
{
    int n,m;
    cin >> n >> m;
    int div = m/n;
    if(div == 1 || div%2 == 0 || div%3 == 0)
    {
        int count = 0;
        for(int i=0;i<calc(div,2);i++)
        {
            n *= 2;
            count++;
        }
        for(int i=0;i<calc(div,3);i++)
        {
            count++;
            n *= 3;
        }
        if(n == m)
            cout << count;
        else
            cout << "-1";
    }
    else
        cout << "-1";
}