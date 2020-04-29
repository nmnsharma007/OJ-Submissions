#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,a,b,c;
        cin >> n;
        int flag = 0;
        int num = n;
        for(int i=2;i*i<num;i++)
        {
            if(num%i == 0)
            {
                flag = 1;
                a = i;
                num /= i;
                break;
            }
        }
        if(flag)
        {
            flag = 0;
            for(int i=2;i*i<num;i++)
            {
                if(num%i == 0 && i > a)
                {
                    flag = 1;
                    num /= i;
                    b = i;
                    break;
                }
            }
            if(flag)
            {
                c = num;
                if(c!=1 && c > b && c > a && c!=n)
                {
                    cout << "YES\n";
                    cout << a << " " << b << " " << c << "\n";
                }
                else
                    cout << "NO\n";
            }
            else
                cout << "NO\n";
        }
        else
            cout << "NO\n";
    }
}