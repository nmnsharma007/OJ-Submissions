#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> freq(1000+5);
    int flag = 1;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        freq[x]++;
        if(freq[x] > (n+1)/2)
            flag = 0;
    }
    if(flag == 0)
        cout << "NO\n";
    else
        cout << "YES\n";
}