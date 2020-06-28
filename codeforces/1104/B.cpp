#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    stack<char> st;
    int count = 0;
    int n = s.length();
    for(int i=0;i<n;i++){
        if(st.empty() || st.top() != s[i])
            st.push(s[i]);
        else{
            st.pop();
            count++;
        }
    }
    if(count&1)
        puts("Yes\n");//j
    else
        puts("No\n");
}