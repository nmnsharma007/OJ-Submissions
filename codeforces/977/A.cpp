#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    while(k--)
    {
        int rem = n%10;
        if(rem)
            n--;
        else
            n /= 10;
    }
    cout << n << "\n";
}