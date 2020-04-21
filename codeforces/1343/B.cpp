#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        if(n%4 == 0)
        {
            int arr[n+1];
            long long int sum = 0,sum1 = 0;
            for(int i=1;i<=n/2;i++)
            {
                arr[i] = 2*i;
                sum += arr[i];
            }
            for(int i=1;i<n/2;i++)
            {
                arr[i+n/2] = 2*i - 1;
                sum1 += arr[i+n/2];
            }
            arr[n] = abs(sum1-sum);
            cout << "YES\n";
            for(int i=1;i<=n;i++)
                cout << arr[i] << " ";
            cout << "\n";
        }
        else
        {
            cout <<"NO\n";
        }
        
    }
}