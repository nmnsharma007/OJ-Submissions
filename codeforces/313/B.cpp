#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int m,l,r;
    cin >> s;
    int len = s.length();
    int a[len-1];
    for(int i = 0; i < len-1;i++)
    {
        a[i] = 0;
    }
    for(int i = 0; i < len-1;i++)
    {
        if(s[i] == s[i+1])
            a[i] = 1;
    }
    int sum[len-1];
    int count = 0;
    for(int i = 0; i < len-1;i++)
    {
        count += a[i];
        sum[i] = count;
    }
    cin >> m;
    while(m--)
    {
        cin >> l >> r;
        cout << sum[r-2] - sum[l-1] + a[l-1] << "\n";
    }
}
