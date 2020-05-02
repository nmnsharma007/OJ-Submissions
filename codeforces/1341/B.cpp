#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        int arr[n+1];
        for(int i=1;i<=n;i++)
            cin >> arr[i];
        int cur_max = 0;
        int ans = 0;
        int index;
        for(int i=2;i<=k-1;i++)
        {
            if(arr[i] > arr[i-1] && arr[i+1] < arr[i])
                cur_max++;
        }
        ans = max(ans,cur_max);
        index = 1;
        for(int i=k;i<=n-1;i++)
        {
            if(arr[i-k+2] > arr[i-k+1] && arr[i-k+2] > arr[i-k+3])
                cur_max--;
            if(arr[i] > arr[i+1] && arr[i] > arr[i-1])
                cur_max++;
            if(cur_max > ans)
            {
                ans = cur_max;
                index = i-k+2;
            }
        }
        cout << ans+1 << " " << index << "\n";
    }
}