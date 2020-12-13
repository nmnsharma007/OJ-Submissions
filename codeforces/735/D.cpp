#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool is_prime(ll n)
{
	if(n == 2 || n == 3)
		return true;
	if(n%2LL == 0 || n%3LL == 0)
		return false;
	for(ll i = 5;i*i <= n;i+=6){
		if(n%i == 0 || n%(i+2) == 0)
			return false;
	}
	return true;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll n;
	cin >> n;
	if(is_prime(n))
		cout << "1\n";
	else if(n%2 == 0)
		cout << "2\n";
	else if(is_prime(n-2))
		cout << "2\n";
	else
		cout << "3\n";
}
