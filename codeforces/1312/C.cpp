#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        ll arr[n+1];
        map<int,int> mp;
        for(int i=0;i<n;i++){
            cin >> arr[i];
            ll temp = arr[i];
            int j=0;
            while(temp){
                mp[j] += temp%k;
                j++;
                temp /= k;
            }
        }
        int flag = 1;
        for(auto &it:mp){
            if(it.second > 1){
                flag = 0;
                break;
            }
        }
        if(flag)
            puts("YES\n");
        else
            puts("NO\n");
    }
}