#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,n;
    cin >> q;
    while(q--)
    {
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin >> arr[i];
        int flag = 1;
        sort(arr,arr+n);
        for(int i=1;i<n;i++)
        {
            if(abs(arr[i] - arr[i-1]) == 1)
                flag = 0;
        }
        if(flag)
            cout << "1\n";
        else
            cout << "2\n";
    }
}
