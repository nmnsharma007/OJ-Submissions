#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    int ans = 0;
    sort(arr,arr+n);
    for(int i=0;i<n-1;i++)
    {
        for(int j = i+1;j<n;j++)
        {
            if(arr[j] == arr[i])
            {
                arr[j]++;
                ans++;
            }
        }
    }
    cout << ans;
}