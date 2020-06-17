#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        string p;
        cin >> p;
        string h;
        cin >> h;
        vector<int> freq1(26);
        for(int i=0;i<p.length();i++)
            freq1[p[i]-'a']++;
        int flag = 0;
        if(h.length() >= p.length())
        {
            for(int i=0;i<=h.length()-p.length();i++){
                vector<int> freq2(26);
                for(int j=i;j<i+p.length();j++)
                    freq2[h[j]-'a']++;
                bool status = true;
                for(int j=0;j<26;j++){
                    if(freq1[j] != freq2[j]){
                        status = false;
                        break;
                    }
                }
                if(status){
                    flag = 1;
                    break;
                }
            }
        }
        if(flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}