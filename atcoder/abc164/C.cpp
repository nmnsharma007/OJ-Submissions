#include<bits/stdc++.h>
#include<set>
using namespace std;
int main()
{
    int n;
    cin >> n;
    unordered_set<string> s;
    for(int i=0;i<n;i++)
    {
        string s1;
        cin >> s1;
        s.insert(s1);
    }
    cout << s.size();
}