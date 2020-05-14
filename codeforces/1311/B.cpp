#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        int arr[n+1],p[n+1];
        for(int i=1;i<=n;i++)
        {
            cin >> arr[i];
            p[i] = 0;
        }
        for(int j=1;j<=m;j++)
        {
            int pos;
            cin >> pos;
            p[pos] = 1;
        }
        while(true)
        {
            int flag = 0;
            for(int i=1;i<=n-1;i++)
            {
                if(arr[i] > arr[i+1] && p[i])
                {
                    flag = 1;
                    swap(arr[i],arr[i+1]);
                }
            }
            if(!flag)
                break;
        }
        int flag = 1;
        for(int i=1;i<n;i++)
        {
            if(arr[i] > arr[i+1])
            {
                flag = 0;
                break;
            }
        }
        if(flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}