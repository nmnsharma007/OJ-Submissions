#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll g1(ll n){
	vector<int> digits;
	while(n){
		digits.push_back(n%10LL);
		n /= 10LL;
	}
	sort(digits.begin(),digits.end(),greater<ll>());
	for(int i = 0; i < (int)digits.size();++i){
		n = 10LL*n + digits[i];
	}
	return n;
}

ll g2(ll n){
	vector<int> digits;
	while(n){
		digits.push_back(n%10LL);
		n /= 10LL;
	}
	sort(digits.begin(),digits.end());
	for(int i = 0; i < (int)digits.size();++i){
		n = 10LL*n + digits[i];
	}
	return n;
}

ll f(ll n){
	return g1(n) - g2(n);
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll n;
	int k;
	cin >> n >> k;
	for(int i = 1; i <= k;++i){
		n = f(n);
	}
	cout << n << "\n";
}
