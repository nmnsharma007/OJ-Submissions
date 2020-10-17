#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	long double ed = 0;
	ll md = 0,cd = 0;
	for(int i = 0; i < n;++i){
		ll x;
		cin >> x;
		cd = max(cd,abs(x));
		md = md + abs(x);
		ed = ed + (long double)(x*x);
	}
	ed = sqrt(ed);
	cout << md << "\n";
	cout << fixed  << setprecision(15) << ed << "\n";
	cout <<  cd << "\n";
}
