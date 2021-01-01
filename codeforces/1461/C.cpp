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
		int n,m;
		cin >> n >> m;
		vector<int> a(n+1);
		for(int i = 1; i <= n;++i){
			cin >> a[i];
		}
		int cnt = n;
		for(int i = n; i >= 1;--i){
			if(a[i] == i)
				--cnt;
			else
				break;
		}
		double ans = 0;
		double prev = 0;
		double temp = 1.0;
		while(m--){
			int r;
			double p;
			cin >> r >> p;
			if(r < cnt)
				continue;
			if(cnt == 0){
				ans = 1.0;
				continue;
			}
			ans = ans + (1.0 - prev) * temp * p;
			temp = (1.0 - prev) * temp;
			prev = p;
		}
		cout << fixed << setprecision(10);
		cout << ans << "\n";
	}
}
