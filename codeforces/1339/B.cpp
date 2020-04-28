#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int arr[n+1];
        for(int i=1;i<=n;i++)
            cin >> arr[i];
        int ans[n+1];
        int left = 1;
        int right = n;
        int k = n;
        sort(arr+1,arr+n+1);
        while(left<=right)
        {
            ans[k--] = arr[right];
            if(left != right)
                ans[k--] = arr[left];
            left++;
            right--;
        }
        for(int i=1;i<=n;i++)
            cout << ans[i] << " ";
        cout << "\n";
    }
}