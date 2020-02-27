#include<iostream>
using namespace std;
int main()
{
    long long int n,m,a,rem1,rem2,ans;
    cin >> n >> m >> a;
    rem1 = n % a;
    rem2 = m % a;
    if(rem1 == 0 && rem2 == 0)
    {
        m = m;
        n = n;
    }
    else if(rem1 == 0 && rem2 != 0)
        m += (a-rem2);
    else if(rem1 != 0 && rem2 == 0)
        n += (a-rem1);
    else
    {
        n += (a-rem1);
        m += (a-rem2);
    }
    ans = (m*n)/(a*a);
    cout << ans;
}
