#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    int i=0;
    int ans = 0;
    int count;
    while(i<n)
    {
        count = 0;
        int j = i;
        while(j<n && arr[j] == 1)
        {
            count++;
            j++;
        }
        if(i!=j)
            i = j;
        else
            i++;
        ans = max(ans,count);
    }
    count = 0;
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i] == 1)
            count++;
        else
            break;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i] == 1)
            count++;
        else
            break;
    }
    ans = max(ans,count);
    cout << ans;
}