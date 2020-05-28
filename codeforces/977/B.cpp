#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<string> s1;
    for(int i=0;i<n-1;i++){
        string temp = "";
        temp += s[i];
        temp += s[i+1];
        s1.insert(temp);
    }
    set<string> :: iterator it;
    int count=0,max_count = 0;
    string ans = "";
    for(it = s1.begin();it != s1.end();it++){
        string temp = *it;
        count = 0;
        for(int i=0;i<n-1;i++){
            string b = "";
            b += s[i];
            b += s[i+1];
            if(b == *it)
                count++;
        }
       if(count > max_count){
           max_count = count;
           ans = *it;
       }
    }
    cout << ans << "\n";
}