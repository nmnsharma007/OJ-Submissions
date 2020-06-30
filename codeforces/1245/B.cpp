#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a,b,c;
        cin >> a >> b >> c;
        string s;
        cin >> s;
        vector<char> ans(n,'.');
        int count = 0;
        for(int i=0;i<n;i++){
            if(s[i] == 'R'){
                if(b > 0){
                    b--;
                    ans[i] = 'P';
                    count++;
                }   
            }
            else if(s[i] == 'P'){
                if(c > 0){
                    c--;
                    ans[i] = 'S';
                    count++;
                }
            }
            else{
                if(a > 0){
                    a--;
                    ans[i] = 'R';
                    count++;
                }
            }
        }
        if(count >= (n+1)/2){
            cout << "YES\n";
            for(int i=0;i<n;i++){
                if(ans[i] == '.'){
                    if(a){
                        ans[i] = 'R';
                        a--;
                    }
                    else if(b){
                        ans[i] = 'P';
                        b--;
                    }
                    else if(c){
                        ans[i] = 'S';
                        c--;
                    }
                }
            }
            for(auto x : ans)
                cout << x;
            cout << "\n";
        }
        else
            cout << "NO\n";
    }
}