#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    int arr[n];
    int ans[n-k+1];
    int sum = 0;
    for(int i = 0; i < n;i++)
    {
        cin >> arr[i];
        if(i < k)
            sum += arr[i];
    }
    ans[0] = sum;
    for(int i = 1; i <= n-k;i++)
    {
        ans[i] = ans[i-1] - arr[i-1] + arr[k+i-1];
    }
    int index = 0;
    for(int i = 1; i <= n-k;i++)
    {
        if(ans[index] > ans[i])
            index = i;
    }
    cout << index+1;
}
