#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while(q--){
        string s;
        cin >> s;
        int m;
        cin >> m;
        int b[m];
        for(int i=0;i<m;i++){
            cin >> b[i];
        }
        vector<int> freq(26,0);
        for(int i=0;i<(int)s.length();i++)
            freq[s[i]-'a']++;
        char c = 'z';
        vector<char> ans(m);
        while(true){
            vector<int> zeroes;
            for(int i=0;i<m;i++){
                if(b[i] == 0){
                    zeroes.push_back(i);
                    b[i] = -1;
                }
            }
            if(zeroes.empty())
                break;
            while(c >= 'a' && freq[c-'a'] < zeroes.size())
                c--;
            for(int i=0;i<(int)zeroes.size();i++)
                ans[zeroes[i]] = c;
            c--;
            for(int i=0;i<m;i++){
                if(b[i] > 0){
                    for(int j=0;j<zeroes.size();j++){
                        b[i] -= abs(zeroes[j]-i);
                    }
                }
            }
        }
         for(int i=0;i<m;i++){
                cout << ans[i];
            }
            cout << "\n";
    }
}