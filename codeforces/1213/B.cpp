#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin >> arr[i];
        int min_price[n];
        min_price[n-1] = arr[n-1];
        for(int i=n-2;i>=0;i--)
        {
            min_price[i] = min(arr[i],min_price[i+1]);
        }
        int count = 0;
        for(int i=0;i<n-1;i++)
        {
            if(arr[i] > min_price[i])
                count++;
        }
        cout << count << "\n";
    }
}