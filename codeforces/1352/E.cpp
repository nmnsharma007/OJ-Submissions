#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int freq[n+1];
        for(int i=0;i<=n;i++)
            freq[i] = 0;
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
            freq[arr[i]]++;
        }
        int ans = 0;
        for(int i=0;i<n-1;i++)
        {
            int sum = arr[i];
            for(int j=i+1;j<n;j++)
            {
                sum += arr[j];
                if(sum <= n)
                {
                    ans += freq[sum];
                    freq[sum] = 0;
                }
                else
                    break;
            }
        }
        cout << ans << "\n";
    }
}