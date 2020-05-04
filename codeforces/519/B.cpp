#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin >> n;
    long long int suma=0,sumb=0,sumc=0;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        suma += x;
    }
    for(int i=0;i<n-1;i++)
    {
        cin >> x;
        sumb += x;
    }
    for(int i=0;i<n-2;i++)
    {
        cin >> x;
        sumc += x;
    }
    cout << suma-sumb << "\n" << sumb-sumc << "\n";
}
