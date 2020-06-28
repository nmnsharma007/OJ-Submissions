#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int n;
    cin >> n;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    ll sum = arr[n-1];
    ll next = arr[n-1];
    for(int i=n-2;i>=0;i--){
        if(next == 1){
            break;
        }
        ll temp = min(next-1,arr[i]);
        next = temp;
        //cout << "Bought:" << temp << "\n";
        sum += temp;
    }
    cout << sum << "\n";
}