#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        int count;
        if(n > 10)
        {
            count = n - 2;
            cout << s[0] << count << s[n-1];
        }
        else
            cout << s;
        cout << endl;
    }
}
