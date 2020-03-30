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
        int i = n-2;
        while(k > (n-i-1) && i )
        {
            k -= (n-i-1);
            i--;
        }
        s[i] = 'b';
        s[n-k] = 'b';
        cout << s << "\n";
    }
}
