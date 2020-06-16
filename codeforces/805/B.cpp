#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string ans = "";
    int i=0;
    int turn = 1;
    while(i < n){
        if(turn%2 == 1){
            ans += "a";
            if(i <n-1)
                ans += "a";
        }
        else{
            ans += "b";
            if(i < n-1)
                ans += "b";
        }
        i+=2;
        turn++;
    }
    cout << ans << "\n";
}