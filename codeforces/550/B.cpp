#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int n,l,r,x;
    cin >> n >> l >> r >> x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int ans = 0;
    for(int i=0;i<pow(2,n);i++){
        int temp = i;
        int sum = 0;
        int maxi = 0;
        int mini = 1e7;
        int flag = 0;
        for(int j=0;j<n;++j){
            if(temp&1){
                flag = 1;
                maxi = max(arr[j],maxi);
                mini = min(arr[j],mini);
                sum += arr[j];
            }
            temp >>= 1;
        }
        if(flag == 1 && sum >= l && sum <= r && maxi-mini >= x)
                ans++;
    }
    cout << ans << "\n";
}