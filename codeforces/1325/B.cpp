#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n;i++)
        {
            cin >> arr[i];
        }
        sort(arr,arr+n);
        int count = 0;
        int i = 0;
        while(i < n)
        {
            count++;
            while(i < n-1 && arr[i] == arr[i+1])
            {
                i++;
            }
            i++;
        }
        cout << count << "\n";
    }
}
