#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    int pos = 0;
    for(int i=1;i<n;i++){
        if(arr[i] > arr[pos])
            pos = i;
    }
    int flag1=1,flag2=1;
    for(int i=pos+1;i<n;i++){
        if(arr[i] < arr[i-1])
            continue;
        else{
            flag1 = 0;
            break;
        }
    }
    for(int i=pos-1;i>=0;i--){
        if(arr[i] < arr[i+1])
            continue;
        else{
            flag2 = 0;
            break;
        }
    }
    if(flag1==0 || flag2 == 0)
        cout << "NO\n";
    else
        cout << "YES\n";
}