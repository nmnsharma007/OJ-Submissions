#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll N = 1000000;
bool primes[N+1];
void soe()
{
	memset(primes,true,sizeof(primes));
	for(ll i=2;i*i<=N;i++)
	{
		if(primes[i] == true)
		{
			for(ll p=i*i;p<=N;p+=i)
				primes[p] = false;
		}
	}
}
int main()
{
	soe();
	ll n;
	cin >> n;
	ll ans = 0;
	ll temp = n;
	for(ll i=2;i<=N;i++)
	{
	    ll count = 0;
	    if(primes[i] && n%i == 0)
	    {
	        while(n%i == 0)
	        {
	            n /= i;
	            count++;
	        }
	        for(ll j=1;j<=N;j++)
	        {
	            if(count < j)
	                break;
                count -= j;
                ans++;
	        }
	    }
	}
	if(n > 1)
	    ans++;
	cout << ans << "\n";
}
