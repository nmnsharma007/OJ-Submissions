#include<iostream>
using namespace std;
long long int nop(int n)
{
    long double ans;
    ans = n/2.0;
    ans *= (n-1);
    long long int res = ans;
    return res;
}
int main()
{
    int n,m;
    cin >> n >> m;
    long long int kmax = nop(n-m+1);
    int rem = n % m;
    long long int kmin = rem*nop(n/m + 1) + (m - rem)*(nop(n/m));
    cout << kmin << " " << kmax;
}
