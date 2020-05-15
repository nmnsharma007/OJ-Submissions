#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        int a[n+1];
        int b[n+1];
        int sum = 0;
        for(int i=1;i<=n;i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        for(int i=1;i<=n;i++)
            cin >> b[i];
        sort(a+1,a+n+1);
        for(int i=1;i<=n;i++)
        {
            sort(b+1,b+n+1);
            for(int j=n;j>0;j--)
            {
                if(a[i] < b[j] && k!=0)
                {
                    k--;
                    sum = sum - a[i] + b[j];
                    swap(a[i],b[j]);
                    break;
                }
            }
            if(k == 0)
                break;
        }
        cout << sum << "\n";
    }
}
