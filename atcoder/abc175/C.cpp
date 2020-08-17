#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll x,k,d;
	cin >> x >> k >> d;
	ll moves = abs(x)/d;
	if(moves <= k){
		k -= moves;
		if(x >= 0)
			x = x - moves * d;
		else
			x = x + moves * d;
	}
	else{
		if(x >= 0)
			x = x - k * d;
		else
			x = x + k * d;
		k = 0;
	}
	if(k%2 == 1){
		if(x >= 0)
			x -= d;
		else
			x += d;
	}
	cout << abs(x) << "\n";
}
