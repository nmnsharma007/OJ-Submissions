#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int count1 = 0,count2 = 0;
    for(int i = 0; i < n;i++){
        cin >> arr[i];
        if(arr[i] == 1)
            count1++;
        else
            count2++;
    }
    if(count1 == n || count2 == n){
        for(int i = 0; i < n;i++){
            cout << arr[i] << " ";
        }
    }
    else{
        count1--;
        count2--;
        cout << "2 1 ";
        while(count2--){
            cout << "2 ";
        }
        while(count1--){
            cout << "1 "; 
        }
    }
}