#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n+1];
    for(int i=1;i<=n;i++)
        cin >> a[i];
    int flag = 0;
    int sum;
    for(int i=0;i< pow(2,n);i++)
    {
        sum = 0;
        int temp = i;
        for(int j=1;j<=n;j++)
        {
            if(temp&1)
                sum += a[j];
            else
                sum -= a[j];
            temp = temp >> 1;
        }
        if(sum % 360 == 0)
        {
            flag = 1;
            break;
        }
    }
    if(flag)
        cout << "YES";
    else
        cout << "NO";
}
