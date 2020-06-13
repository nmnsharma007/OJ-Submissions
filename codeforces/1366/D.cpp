#include<bits/stdc++.h>
using namespace std;
const int N = 10000005;
vector<int> lowest_primes(N+1);
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    for(int i=1;i<=N;i++)
        lowest_primes[i] = i;
    for(int i=2;i*i<=N;i++)
    {
        if(lowest_primes[i] == i)
        {
            for(int j=i*i;j<=N;j+=i)
                lowest_primes[j] = i;
        }
    }
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    int d1[n],d2[n];
    for(int i=0;i<n;i++)
    {
        int temp = arr[i];
        int pf = lowest_primes[temp];
        while(temp%pf == 0)
        {
            temp /= pf;
        }
        if(temp > 1)
        {
            d1[i] = pf;
            d2[i] = temp;
        }
        else
            d1[i] = d2[i] = -1;
    }
    for(int i=0;i<n;i++)
        cout << d1[i] << " ";
    cout << "\n";
    for(int i=0;i<n;i++)
        cout << d2[i] << " ";
}