#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int q;
	cin >> q;
	while(q--){
		int n;
		cin >> n;
		vector<int> freq(n+1,0);
		for(int i = 1; i <= n;++i){
			int x;
			cin >> x;
			++freq[x];
		}
		ll ans = 0;
		sort(freq.begin() + 1,freq.end());
		int before = 1e6;
		for(int i = n; i > 0;--i){
			if(freq[i] < before){
				ans += freq[i];
				before = freq[i];
			}
			else{
				--before;
				if(before <= 0)
					break;
				ans += before;
			}
		}
		cout << ans << "\n";
	}
}
