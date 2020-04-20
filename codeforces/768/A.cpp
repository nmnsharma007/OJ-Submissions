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
    int index1 = 0,index2 = -1;
    if(n <= 2)
    {
        cout << "0";
    }
    else
    {
        for(int i=1;i<n;i++)
        {
            if(arr[i] > arr[0])
         {
                index1 = i;
             break;
            }
        }
        for(int i=n-2;i>=0;i--)
        {
            if(arr[n-1] > arr[i])
            {
                index2 = i;
                break;
            }
        }
    cout << index2 - index1 + 1;
    }
}