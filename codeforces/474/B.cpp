#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n;i++)
    {
        cin >> arr[i];
    }
    cin >> m;
    int sum[n];
    sum[0] = arr[0];
    for(int i = 1;i < n;i++)
    {
        sum[i] = sum[i-1] + arr[i];
    }
    while(m--)
    {
        int q;
        cin >> q;
        cout << lower_bound(sum,sum+n,q) - sum + 1 << "\n";
    }
}
