#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin >> n;
    int arr[n+1],temp[n+1];
    for(int i = 1; i <= n;i++)
    {
        cin >> x;
        arr[i] = x;
        temp[i] = x;
    }
    sort(temp+1,temp+n+1);
    long long int sum[n+1],sum1[n+1];
    long long int count = 0,count1 = 0;
    sum[0] = 0;
    sum1[0] = 0;
    for(int i = 1;i <= n;i++)
    {
        count += arr[i];
        count1 += temp[i];
        sum[i] = count;
        sum1[i] = count1;
    }
    int m,type,l,r;
    cin >> m;
    while(m--)
    {
        cin >> type >> l >> r;
        if(type == 1)
        {
            cout << sum[r] - sum[l-1] << "\n";
        }
        else
        {
            cout << sum1[r] - sum1[l-1] << "\n";
        }
        
    }
}