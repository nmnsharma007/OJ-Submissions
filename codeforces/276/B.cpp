#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int freq[26];
    memset(freq,0,sizeof(freq));
    for(int i=0;i<s.length();i++)
        freq[s[i]-'a']++;
    int ocount = 0;
    for(int i=0;i<26;i++)
    {
        if(freq[i]&1)
            ocount++;
    }
    if(ocount <= 1 || ocount & 1)
        cout << "First";
    else
        cout << "Second";
}