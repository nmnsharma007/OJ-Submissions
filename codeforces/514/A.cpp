#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x;
    cin >> x;
    int n = x.length();
    int arr[n];
    for(int i=0;i<n;i++)
    {
        arr[i] = x[i] - '0';
    }
    if(arr[0] > 4 && arr[0] != 9)
        arr[0] = 9 - arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i] > 4)
            arr[i] = 9 - arr[i];
    }
    for(int i=0;i<n;i++)
        cout << arr[i];
}
