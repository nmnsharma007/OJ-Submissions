#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while(q--){
        string s,t;
        cin >> s >> t;
        int flag = 0;
        int n = s.length();
        vector<int> freq(26);
        for(int i=0;i<n;i++){
            freq[s[i]-'a']++;
        }
        for(int i=0;i<n;i++){
            if(freq[t[i]-'a']){
                flag = 1;
                break;
            }
        }
        if(flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}