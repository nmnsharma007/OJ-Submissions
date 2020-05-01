#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long int h[n],x[n],temp[n];
    for(int i=0;i<n;i++)
    {
        cin >> x[i] >> h[i];
        temp[i] = x[i];
    }
    int ans = 1;
    int count = 1;
    if(n>=3)
    {
        ans = 2;
        count = 2;
        for(int i=1;i<n-1;i++)
        {
            if(x[i]-x[i-1] > h[i])
                count++;
            else if(x[i+1] - x[i] > h[i])
            {
                x[i] += h[i];
                count++;
            }
        }
        ans = max(ans,count);
        count = 2;
        for(int i=n-2;i>0;i--)
        {
            if(temp[i+1] - temp[i] > h[i])
                count++;
            else if(temp[i] - temp[i-1] > h[i])
            {
                count++;
                temp[i] -= h[i];
            }
        }
        ans = max(ans,count);
    }
    else if(n==2)
        ans = 2;
    else if(n == 1)
        ans = 1;
        cout << ans;
}