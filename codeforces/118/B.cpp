#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int l = 2*n;
    int k = 0;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<l;j++)
            cout << " ";
        for(int m = 0; m <= k;m++)
        {
            if(k!=0)
            cout << m << " ";
            else
                cout << m;
        }
        for(int m = k-1;m>=0;m--)
        {
            if(m!=0)
                cout << m << " ";
            else
                cout << m;
        }
        cout << "\n";
        l -= 2;
        k++;
    }
    l = 2;
    k = n-1;
    for(int i=0;i<n;i++)
    {
        for(int j=l;j>0;j--)
            cout << " ";
        for(int m = 0; m <=k;m++)
        {
            if(k!=0)
                cout << m << " ";
            else
                cout << m;
        }
        for(int m = k-1;m>=0;m--)
        {
            if(m!=0)
                cout << m << " ";
            else
                cout << m;
        }
        cout << "\n";
        l += 2;
        k--;
    }
}