#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;
    cin >>  n >> d;
    int arr[n];
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    sum += (n-1)*10;
    if(sum <= d)
    {
        int ans = 0;
        int temp = abs(d-sum);
        ans += (temp/5) + (n-1)*2;
        cout << ans;
    }
    else
        cout << "-1";
}