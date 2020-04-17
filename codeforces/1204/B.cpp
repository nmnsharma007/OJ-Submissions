#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,r;
    cin >> n >> l >> r;
    long long int min_sum = n-l+1;
    long long int max_sum = (n-r+1)*pow(2,r-1) + pow(2,r-1) - 1;
    for(int i = 1; i<= l-1;i++)
    {
        min_sum += pow(2,i);
    }
    cout << min_sum << " " << max_sum;
}