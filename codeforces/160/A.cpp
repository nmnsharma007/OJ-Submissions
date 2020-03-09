#include<bits/stdc++.h>
using namespace std;
int sum_of_array(int* arr,int k)
{
    int sum = 0;
    for(int i = 0; i <= k;i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n;i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    int count = 1;
    int temp = arr[n-1];
    int i = 1;
    while(i < n)
    {
        if(sum_of_array(arr,n-i-1) < temp)
            break;
        else
        {
            temp += arr[n-i-1];
            i++;
            count++;
        }
    }
    cout << count;
}
