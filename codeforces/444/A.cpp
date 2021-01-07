#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin >> n >> m;
	vector<int> values(n);
	for(int i = 0; i < n;++i){
		cin >> values[i];
	}
	double ans = 0;
	for(int i = 0; i < m;++i){
		int a,b,c;
		cin >> a >> b >> c;
		--a,--b;
		ans = max(ans,(double)(values[a]+values[b])/(double)c);
	}
	cout << fixed << setprecision(15);
	cout << ans << "\n";
}
