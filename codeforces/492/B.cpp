#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l;
    cin >> n >> l;
    double arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    sort(arr,arr+n);
    double ans = 0.0;
    for(int i=1;i<n;i++)
    {
        ans = max(ans,(arr[i]-arr[i-1])/2.0);
    }
    if(arr[0]!=0)
        ans = max(ans,arr[0]-0);
    if(arr[n-1] != l)
        ans = max(ans,l-arr[n-1]);
    printf("%.15f",ans);
}