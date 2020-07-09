#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int ecount = 0,ocount = 0;
    for(int i = 0; i < n;i++){
        cin >> arr[i];
        if(arr[i]&1)
            ocount++;
        else
            ecount++;
    }
    if(ecount != n && ocount != n)
        sort(arr,arr+n);
    for(int i = 0; i < n;i++)   
        cout << arr[i] << " ";
}