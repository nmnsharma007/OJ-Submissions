#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int x[n],y[n];
	for(int i = 0; i < n;++i){
		cin >> x[i] >> y[i];
	}
	int ans = 0;
	for(int i = 0; i < n;++i){
		for(int j = i+1; j < n;++j){
			int dx = abs(x[i] - x[j]);
			int dy = abs(y[i] - y[j]);
			if(dy <= dx)
				++ans;
		}
	}
	cout << ans << "\n";
}
