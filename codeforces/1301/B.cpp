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
        for(int i = 0; i < n;i++){
            cin >> arr[i];
        }
        int mini = 1e9+7;
        int maxi = 0;
        for(int i = 0; i < n;i++){
            if(i > 0 && arr[i-1] != -1 && arr[i] == -1){
                mini = min(mini,arr[i-1]);
                maxi = max(maxi, arr[i-1]);
            }
            if(i < n-1 && arr[i+1] != -1 && arr[i] == -1){
                mini = min(mini,arr[i+1]);
                maxi = max(maxi,arr[i+1]);
            }
        }
     //   cout << mini << " " << maxi << "\n";
        int k = (mini+maxi)/2;
        for(int i = 0; i < n;i++){
            if(arr[i] == -1){
                arr[i] = k;
            }
        }
        int max_dif = 0;
        for(int i = 1;i < n;i++){
            max_dif = max(max_dif,abs(arr[i] - arr[i-1]));
        }
        cout << max_dif << " " << k << "\n";
    }
}