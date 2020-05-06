#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n,h,temp;
        cin >> n;
        int count = 0;
        while(n>1)
        {
            for(int i=1;i<=n;i++)
            {
                temp = (i*(3*i+1))/2;
                if(temp > n)
                {
                    h = i-1;
                    count++;
                    break;
                }
            }
            n = n - (h*(3*h+1))/2;
        }
        cout << count << "\n";
    }
}
