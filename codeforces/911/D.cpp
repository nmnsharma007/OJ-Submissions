#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> p(n);
	for(int i = 0; i < n;++i){
		cin >> p[i];
	}
	int ans = 0;
	for(int i = 0; i < n;++i){
		for(int j = 0; j < i;++j){
			if(p[j] > p[i])
				++ans;
		}
	}
	int m;
	cin >> m;
	int parity = (ans%2) ? 1 : 0;
	while(m--){
		int l,r;
		cin >> l >> r;
		int swaps = (r-l+1)/2;
		if(swaps%2)
			parity ^= 1;
		if(parity)
			cout << "odd\n";
		else
			cout << "even\n";
	}
}
