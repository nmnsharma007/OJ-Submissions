#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    long long int sum = 0;
    int ocount = 0;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        if(arr[i]%2)
            ocount++;
        sum += arr[i];
    }
    if(ocount%2)
    {
        sort(arr,arr+n);
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2)
            {
                sum -= arr[i];
                break;
            }
        }
        cout << sum;
    }
    else
        cout << sum;
}