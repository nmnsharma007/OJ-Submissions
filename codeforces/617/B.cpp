#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    int start = -1;
    int end = -1;
    for(int i=0;i<n;i++)
    {
        if(arr[i] == 1)
        {
            start = i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i] == 1)
        {
            end = i;
            break;
        }
    }
    ll count = 0;
    ll ans = 1;
    for(int i=start;i<=end;i++)
    {
        if(arr[i] == 0)
            count++;
        else
        {
            ans *= (count+1);
            count = 0;
        }
    }
    if(start == -1)
        ans = 0;
    cout << ans << "\n";
}