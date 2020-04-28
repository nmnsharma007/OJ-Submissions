#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int count = 0;
    long long int ans = 0;
    int count_of_zero = 0;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        if(arr[i] < 0)
            count++;
        if(arr[i] == 0)
            count_of_zero++;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i] > 0)
            ans += abs(arr[i] - 1);
        else if(arr[i] < 0)
            ans += abs(arr[i]+1);
    }
    if(count%2)
    {
        if(count_of_zero)
        {       
            ans++;
            count_of_zero--;
            if(count_of_zero)
                ans += abs(count_of_zero);
        }
        else
            ans += 2;
        
    }
    else
    {
        if(count_of_zero)
            ans += count_of_zero;
    }
    cout << ans;
}