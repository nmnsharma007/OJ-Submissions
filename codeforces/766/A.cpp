#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin >> a >> b;
    if(a.length() > b.length())
        cout << a.length();
    else if(b.length() > a.length())
        cout << b.length();
    else
    {
        int flag = 0;
        for(int i=0;i<a.length();i++)
        {
            if(a[i] != b[i])
            {
                flag = 1;
                break;
            }
        }
        if(flag)
            cout << a.length();
        else
            cout << "-1";
    }
    
}