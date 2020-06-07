#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while(q--)
    {
        int n,k;
        cin >> n >> k;
        int arr[n];
        int ocount = 0;
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
            if(arr[i]&1)
                ocount++;
        }
        if(ocount < k)
            cout << "NO\n";
        else 
        {
            if(ocount%2 == k%2)
            {
                cout << "YES\n";
                k--;
                for(int i=0;i<n;i++)
                {
                    if(k && arr[i]&1)
                    {
                        k--;
                        cout << i+1 << " ";
                    }
                }
                cout << n << "\n";
            }
            else
                cout << "NO\n";
        }
    }
}