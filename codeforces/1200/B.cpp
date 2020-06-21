#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n,m,k;
        cin >> n >> m >> k;
        int arr[n];
        for(int i=0;i<n;i++)
            cin >> arr[i];
        int flag = 1;
        for(int i=0;i<n-1;i++){
            if(abs(arr[i]-arr[i+1]) <= k){
                int temp = max(0,arr[i+1]-k);
                m += arr[i] - temp;
                continue;
            }
            if(arr[i] >= arr[i+1]){
                int temp = max(0,arr[i+1]-k);
                m += arr[i] - temp;
            }
            else{
                int temp = arr[i+1]-k-arr[i];
                m -= temp;
            }
            if(m < 0){
                flag = 0;
                break;
            }
        }
        if(flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}