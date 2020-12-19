#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin >> n >> m;
	vector<ll> a(n),b(m);
	for(int i = 0; i < n;++i){
		cin >> a[i];
	}
	for(int j = 0; j < m;++j){
		cin >> b[j];
	}
	sort(a.begin(),a.end());
	ll mini = 0;
	for(int i = 1; i < n;++i){
		mini = __gcd(mini,a[i]-a[i-1]);
	}
	for(int i = 0; i < m;++i){
		cout << __gcd(mini,a[0]+b[i]) << " ";
	}
	cout << "\n";
}
