#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    cin >> m;
    int arr1[m];
    for(int i=0;i<m;i++)
        cin >> arr1[i];
    sort(arr,arr+n);
    sort(arr1,arr1+m);
    cout << arr[n-1]<< " " << arr1[m-1] ;
}