#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,n,k;
    cin >> q;
    while(q--)
    {
        cin >> n >> k;
        int arr[n+1];
        for(int i = 1;i <= n;i++)
        {
            cin >> arr[i];
        }
        sort(arr+1,arr+n+1);
        if(abs(arr[n] -(arr[1]+k)) <= k)
            cout << arr[1] + k << "\n";
        else
        {
            cout << "-1" << "\n";
        }
        
        
    }
}