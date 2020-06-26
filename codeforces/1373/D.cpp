#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll arr[n];
        ll sum = 0;
        for(int i=0;i<n;i++){
            cin >> arr[i];
            if(i%2 == 0)
                sum += arr[i];
        }
        vector<ll> v1,v2;
        for(int i=1;i<n;i+=2){
            ll temp = arr[i]-arr[i-1];
            v1.push_back(temp);
        }
        for(int i=2;i<n;i+=2){
            ll temp = arr[i-1]-arr[i];
            v2.push_back(temp);
        }
        ll max_value1 = 0;
        ll max_sum1 = 0;
        ll max_value2 = 0;
        ll max_sum2 = 0;
        for(int i=0;i<(int)v1.size();i++){
            max_value1 += v1[i];
            if(max_value1 < 0){
                max_value1 = 0;
            }
            if(max_value1 > max_sum1)
                max_sum1 = max_value1;
        }
        for(int i=0;i<(int)v2.size();i++){
            max_value2 += v2[i];
            if(max_value2 < 0){
                max_value2 = 0;
            }
            if(max_value2 > max_sum2)
                max_sum2 = max_value2;
        }
        cout << sum + max(max_sum2,max_sum1) << "\n";
    }
}