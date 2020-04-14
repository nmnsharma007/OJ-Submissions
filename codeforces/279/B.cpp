#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,t;
    cin >> n >> t;
    int sum[n+1];
    sum[0] = 0;
    for(int i = 1; i <= n;i++)
    {
        cin >> x;
        sum[i] = sum[i-1] + x;
    }
    int ans = 0;
    for(int i = 1; i <= n;i++)
    {
        int right = n;
        int left = i;
        int key = sum[i-1] + t;
        int mid;
        while(left <= right)
        {
            mid = (left+right)/2;
            if(sum[mid] <= key)
            {
                ans = max(ans,mid-i+1);
                left = mid+1;
            }
            else
                right = mid-1;
        }
    }
    cout << ans;
}
