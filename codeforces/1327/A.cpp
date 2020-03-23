#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        if(n % 2 == 0 && k % 2 == 0)
        {
            if(n/k >= k)
                cout << "YES" <<"\n";
            else
                cout << "NO" << "\n";
        }
        else if(n % 2 == 1 && k % 2 == 1)
        {
            if(n/k >= k)
                cout << "YES" << "\n";
            else
                cout << "NO" << "\n";
        }
        else
            cout << "NO" << "\n";
    }
}
