#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,r;
	cin >> n >> r;
	vector<int> points(n);
	vector<double> ans(n);
	for(int i = 0; i < n;++i){
		cin >> points[i];
	}
	for(int i = 0;i < n;++i){
		int x = points[i];
		ans[i] = r;
		for(int j = 0; j < i;++j){
			if(abs(x-points[j]) > 2*r)
				continue;
			int d = abs(x-points[j]);
			double temp = sqrt(4*r*r - d*d) + ans[j];
			ans[i] = max(ans[i],temp);
		}
	}
	cout << fixed << setprecision(12);
	for(auto x : ans)
		cout << x << " ";
	cout << "\n";
}
