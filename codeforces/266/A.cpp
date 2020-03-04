#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
    for(int i = 1; i < n;i++)
    {
        if(s[i] == s[i-1])
            count++;
    }
    int count1 = 0;
    for(int i = n-2;i >= 0;i--)
    {
        if(s[i] == s[i+1])
            count1++;
    }
    if(count > count1)
        cout << count;
    else
        cout << count1;
}
