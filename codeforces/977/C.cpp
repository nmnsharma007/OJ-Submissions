#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,x;
    cin >> n >> k;
    int arr[n+1];
    for(int i=1;i<=n;i++)
        cin >> arr[i];
    sort(arr+1,arr+n+1);
    if(k)
    {
        x = arr[k];
        if(x == arr[k+1])
            cout << "-1";
        else
            cout << x;
    }
    else if(k==0)
    {
        if(arr[1] > 1)
            cout << "1";
        else
            cout << "-1";
    }
}