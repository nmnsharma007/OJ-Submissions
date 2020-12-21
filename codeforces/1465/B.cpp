#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool check(ll n)
{
	ll temp = n;
	while(temp > 0LL){
		ll rem = temp%10LL;
		temp /= 10LL;
		if(rem == 0LL)
			continue;
		if(n%rem != 0LL)
			return false;
	}
	return true;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		for(ll i = n;;++i){
			if(check(i)){
				cout << i << "\n";
				break;
			}
		}
	}
}
