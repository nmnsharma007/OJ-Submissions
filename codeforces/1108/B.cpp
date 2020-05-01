#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    int freq[10001];
    for(int i=0;i<10001;i++)
        freq[i] = 0;
    sort(arr,arr+n);
    long long int x = arr[n-1];
    long long int y = 1;
    for(int i=0;i<n;i++)
    {
        int temp = arr[i];
        if(x%temp == 0 && freq[temp] == 0)
        {
            arr[i] = 0;
            freq[temp] = 1;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i] != 0)
        {
            y = arr[i];
            break;
        }
    }
    cout << x << " " << y;
}