#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int freq[27];
    cin >> n;
    string s;
    cin >> s;
      for(int i=1;i<=26;i++)
        freq[i] = 0;
    for(int i=0;i<n;i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + 32;
        freq[s[i] - 'a' + 1] = 1;
    }
    int flag = 1;
    for(int i=1;i<=26;i++)
    {
        if(freq[i] == 0)
        {
            flag = 0;
            break;
        }
    }
    if(flag)
        cout << "YES";
    else
        cout << "NO";
}