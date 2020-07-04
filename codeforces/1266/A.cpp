#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    for(int i=0;i<n;i++){
        cin >> s;
        int num = 0;
        int flag = 0;
        int sum = 0;
        for(int j=0;j<(int)s.length();j++){
            sum += s[j] - '0';
            int temp = s[j] - '0';
            if(temp%2 == 0)
                num++;
            if(temp == 0)
                flag = 1;
        }
        if(flag && num >= 2 && sum%3 == 0)
            puts("red");
        else
            puts("cyan");
    }
}