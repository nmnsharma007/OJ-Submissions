#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n],suf[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    suf[n-1] = arr[n-1];
    for(int i=n-2;i>=0;i--){
        suf[i] = max(arr[i],suf[i+1]);
    }
    for(int i=0;i < n-1;i++){
        if(suf[i+1] >= arr[i]){
            cout << suf[i+1]-arr[i]+1 << " ";
        }
        else
            cout << "0 ";
    }
    puts("0\n");
}