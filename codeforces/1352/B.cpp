#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t,n,k;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        if(n%2==1 && k%2==0)
            cout << "NO\n";
        else if(n%2==0 && k%2==0)
        {
            if(n>=k)
            {
                cout << "YES\n";
                for(int i=1;i<=k-1;i++)
                    cout << "1 ";
                ll remain = n - k + 1;
                cout << remain << "\n";
            }
            else
                cout << "NO\n";
        }
        else if(n%2==1 && k%2 == 1)
        {
            if(n>=k)
            {
                cout << "YES\n";
                for(int i=1;i<=k-1;i++)
                    cout << "1 ";
                ll remain = n - k + 1;
                cout << remain << "\n";
            }
            else
                cout << "NO\n";
        }
        else
        {
            if(n >= 2*k)
            {
                cout << "YES\n";
                for(int i=1;i<=k-1;i++)
                    cout << "2 ";
                ll remain = n - 2*(k-1);
                cout << remain << "\n";
            }
            else
                cout << "NO\n";
        }
        
    }
}