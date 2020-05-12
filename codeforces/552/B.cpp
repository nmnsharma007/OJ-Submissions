#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll no_of_digits(ll n)
{
    ll count = 0;
    while(n)
    {
        n /= 10;
        count++;
    }
    return count;
}
int main()
{
    ll n;
    cin >> n;
    ll num = pow(10,no_of_digits(n)-1);
    ll nod = no_of_digits(n);
    long long int ans = 0;
    while(num > 0)
    {
        ll temp = n;
        ans += abs(temp - num+1) * nod;
        nod--;
        n = num-1;
        num /= 10;
    }
    cout << ans;
}