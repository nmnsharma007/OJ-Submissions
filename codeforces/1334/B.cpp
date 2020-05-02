#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,x;
        cin >> n >> x;
        int arr[n];
        double sum = 0,avg;
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        sort(arr,arr+n);
        avg = (double)sum/n;
        if(avg >= x)
        {
            cout << n << "\n";
        }
        else
        {
            int ans = 0;
            for(int i=1;i<n;i++)
            {
                sum -= arr[i-1];
                avg = (double)sum/(n-i);
                if(avg >= x)
                {
                    ans = n-i;
                    break;
                }
            }
            cout << ans << "\n";
        }
        
    }
}