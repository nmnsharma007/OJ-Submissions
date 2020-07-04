#include<bits/stdc++.h>
using namespace std;
const int INF = 1e9;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        int arr[n];
        int ans = INF;
        int mx = 0;
        for(int i=0;i<n;i++){
            cin >> arr[i];
            mx = max(arr[i],mx);
            if(arr[i] == x)
                ans = 1;
        }
        cout << min(ans,max(2,(x+mx-1)/mx)) << "\n";
    }
}