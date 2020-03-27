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
        string x;
        cin >> x;
        string a(n,'0'),b(n,'0');
        for(int i = 0; i  < n;i++)
        {
            if(x[i] == '0' || x[i] == '2')
            {
                if(x[i] == '0')
                {
                    a[i] = '0';
                    b[i] = '0';
                }
                else
                {
                    a[i] = '1';
                    b[i] = '1';
                }
            }
            else
            {
                a[i] = '1';
                b[i] = '0';
                for(int j = i+1; j < n;j++)
                {
                    b[j] = x[j];
                }
                break;
            }
        }
        cout << a << endl << b << endl;
    }
}
