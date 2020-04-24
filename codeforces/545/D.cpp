#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    sort(arr,arr+n);
    long long int sum = 0;
    int count = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] >= sum)
        {
            sum += arr[i];
            count++;
        }
    }
    cout << count;
}