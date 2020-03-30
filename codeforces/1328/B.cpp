#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t,n,k;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        string s(n,'a');
        for(int i = n-2;i >= 0;i--)
        {
            if(k <= n-i-1)
            {
                s[i] = 'b';
                s[n-k] = 'b';
                cout << s << "\n";
                break;
            }
            else
                k -= (n-i-1);
        }
    }
}
