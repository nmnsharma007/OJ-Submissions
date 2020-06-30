#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
    char arr[3] = {'R','B','G'};
    for(int i=1;i<n;i++){
        if(s[i] != s[i-1])
            continue;
        count++;
        for(int j=0;j<3;j++){
            if(arr[j] != s[i-1] && (i == n-1 || arr[j] != s[i+1])){
                s[i] = arr[j];
                break;
            }
        }
    }
    cout << count << "\n";
    cout << s << "\n";
}