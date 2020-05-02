#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    int ans = 0;
    for(int i=1;i<n;i++)
    {
        if(arr[i] + arr[i-1] < k)
        {
            int temp = arr[i];
            arr[i] = abs(k-arr[i-1]);
            ans += abs(temp-arr[i]);
        }
    }
    cout << ans << "\n";
    for(int i=0;i<n;i++)
        cout << arr[i] << " ";
}