#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        if(n%2 == 0)
        {
            n /= 2;
            for(int i=0;i<n;i++)
            {
                cout << "1";
            }
        }
        else
        {
            cout << "7";
            n -= 3;
            n /=2;
            for(int i=0;i<n;i++)
            {
                cout << "1";
            }
        }
        cout << "\n";
        
    }
}