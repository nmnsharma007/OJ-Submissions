#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int sum = 0;
    int ans = 0;
    for(int i=0;i<(int)s.length();i++){
        sum += s[i] - '0';
    }
    int n = s.length();
    if(n != 1)
        ans++;
    while(sum/10){
        ans++;
       // cout << "sum:" << sum << "\n";
        int temp = sum;
        sum = 0;
        while(temp){
            int rem = temp%10;
            sum += rem;
            temp /= 10;
        }
    }
    cout << ans << "\n";
}