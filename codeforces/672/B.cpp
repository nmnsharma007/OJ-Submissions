#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<char> s1;
    for(int i=0;i<n;i++)
        s1.insert(s[i]);
    if(n <= 26)
        cout << n - s1.size();
    else
        cout << "-1";
}