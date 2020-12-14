#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e3+5;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll n,s;
	cin >> n >> s;
	vector<ll> v(n+1);
	ll sum = 0,mini = 1e9+7;;
	for(int i = 1; i <= n;++i){
		cin >> v[i];
		sum += v[i];
		mini = min(mini,v[i]);
	}
	if(sum < s)
		cout << "-1\n";
	else{
		ll taken = 0;
		for(int i = 1; i <= n;++i){
			taken += v[i]-mini;
			v[i] = mini;
		}
		if(taken >= s)
			cout << mini << "\n";
		else{
			s -= taken;
			ll factor = s/n;
			if(s <= factor*n)
				cout << mini-factor << "\n";
			else
				cout << mini-factor-1 << "\n";
		}
	}
}
