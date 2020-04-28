#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    sort(arr,arr+n);
    int flag = 0;
    for(int i=n-1;i>=2;i--)
    {
        if(arr[i-2] + arr[i-1] > arr[i])
        {
            flag = 1;
            break;
        }
    }
    if(flag)
        cout << "YES";
    else
        cout << "NO";
}