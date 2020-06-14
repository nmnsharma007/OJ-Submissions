#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        int freq[200001];
        for(int i=0;i<=200000;i++)
            freq[i] = -1;
        int ans = 1000000;
        for(int i=0;i<n;i++){
            cin >> arr[i];
            if(freq[arr[i]] == -1)
                freq[arr[i]] = i;
            else{
                ans = min(ans,abs(freq[arr[i]] - i));
                freq[arr[i]] = i;
            }
        }
        if(ans == 1000000)
            cout << "-1\n";
        else
            cout << ans+1 << "\n";
    }
}