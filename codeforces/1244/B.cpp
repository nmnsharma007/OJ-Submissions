#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> pos;
        for(int i=0;i<n;i++)
        {
            if(s[i] == '1')
                pos.push_back(i);
        }
        if(pos.empty())
            cout << n << "\n";
        else
        {
            int ans = max(pos[pos.size()-1]+1,n-pos[0])*2;
            cout << ans << "\n";
        }
    }
}