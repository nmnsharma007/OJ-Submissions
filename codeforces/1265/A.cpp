#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.length();
        string temp = "abc";
        int flag = 1;
        for(int i=1;i<n;i++){
            if(s[i] == s[i-1]  && s[i] != '?'){
                flag = 0;
                break;
            }
        }
        if(flag == 0)
            cout << "-1\n";
        else{
            for(int i=0;i<n;i++){
                if(s[i] == '?'){
                    for(int j=0;j<3;j++){
                        s[i] = temp[j];
                        int flag1 = 0;
                        int flag2 = 0;
                        if(i == 0 || (i > 0 && s[i] != s[i-1]))
                            flag1 = 1;
                        if(i == n-1 || (i < n-1 && s[i] != s[i+1]))
                            flag2 = 1;
                        if(flag1 && flag2)
                            break;
                    }
                }
                else
                    continue;
            }
            cout << s << "\n";
        }
    }
}