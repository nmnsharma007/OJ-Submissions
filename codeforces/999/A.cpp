#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    int arr[n];
    int right=0,left=0;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i] <= k)
            left++;
        else
            break;
    }
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i] <= k)
            right++;
        else break;
    }
    int ans = min(n,left+right);
    cout << ans;
}
