#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e6;
vector<bool> primes(N,true);

void soe()
{
	for(int i = 2;i*i <= N;++i){
		if(primes[i]){
			for(int j = i*i; j < N;j+=i){
				primes[j] = false;
			}
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	soe();
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		ll val = -1,maxi = 1;
		for(ll i = 2; i*i <= n;++i){
			if(primes[i] && n%i == 0){
				int cnt = 0;
				ll temp = n;
				while(temp%i == 0){
					temp /= i;
					++cnt;
				}
				if(cnt >= maxi){
					maxi = cnt;
					val = i;
				}
			}
		}
		if(val == -1)
			val = n;
		vector<ll> ans;
		ll factor = 1;
		for(int i = 0; i < maxi-1;++i){
			ans.push_back(val);
			factor *= val;
		}
		ans.push_back(n/factor);
		cout << ans.size() << "\n";
		for(auto x : ans)
			cout << x << " ";
		cout << "\n";
	}
}