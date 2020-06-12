#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin >> k;
    while(k--){
        int n;
        cin >> n;
        string s,t;
        cin >> s;
        cin >> t;
        int count = 0;
        vector<int> v;
        for(int i=0;i<n;i++){
            if(s[i] != t[i]){
                count++;
                v.push_back(i);
            }
        }
        if(count == 2){
            if(s[v[0]] == s[v[1]] && t[v[0]] == t[v[1]])
                cout << "Yes\n";
            else
                cout << "No\n";
        }
        else
            cout << "No\n";
    }
}