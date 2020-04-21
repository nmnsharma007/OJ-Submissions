#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int k = 2;
        int div;
        for(int k=2;k<=n;k++)
        {
            div = pow(2,k) - 1;
            if(n%div == 0)
            {
                cout << n/div << "\n";
                break;
            }
        }
    }
}