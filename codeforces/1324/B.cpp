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
        int flag = 0;
        for(int i=0;i<n;i++)
        {
            int temp = arr[i];
            for(int j=i+2;j<n;j++)
            {
                if(arr[j] == temp)
                {
                    flag = 1;
                    break;
                }
            }
        }
        if(flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}