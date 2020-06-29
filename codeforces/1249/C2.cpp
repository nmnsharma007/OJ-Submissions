#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int q;
    cin >> q;
    while(q--){
        ll n;
        cin >> n;
        int arr[90];
        ll temp = n;
        int i=0;
        int flag = 0;
        memset(arr,0,sizeof(arr));
        int pos = -1;
        while(temp){
            arr[i] = temp % 3LL;
            temp /= 3LL;
            if(arr[i] == 2){
                pos = i;
                flag = 1;
            }
            i++;
        }
        if(!flag)
            cout << n << "\n";
        else{
            ll ans = 0;
            for(int i=0;i<=pos;i++){
                arr[i] = 0;
            }
            for(int i=pos+1;i<100;i++){
                if(arr[i] == 0){
                    arr[i] = 1;
                    break;
                }
                else
                    arr[i] = 0;
            } 
            for(int i=0;i<100;i++){
                ll temp = (ll)pow(3,i);
                ans = ans + temp*arr[i];
            }
            cout << ans << "\n";
        }
    }
}