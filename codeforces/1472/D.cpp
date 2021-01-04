#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<ll> v;
		for(int i = 0; i < n;++i){
			ll x;
			cin >> x;
			v.push_back(x);
		}
		sort(v.begin(),v.end());
		int turn = 1;
		ll suma = 0,sumb = 0;
		for(int i = n-1; i >= 0;--i){
			ll x = v[i];
			if(turn%2 == 1){
				if(x%2 == 0)
					suma += x;
			}
			else{
				if(x%2 == 1)
					sumb += x;
			}
			++turn;
		}
		if(suma == sumb)
			cout << "Tie\n";
		else if(suma > sumb)
			cout << "Alice\n";
		else
			cout << "Bob\n";
	}
}
