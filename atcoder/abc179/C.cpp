#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e6+1;
vector<int> freq(N,1);
void solve()
{
	for(int i = 1; i < N;++i){
		for(int j = 2*i; j < N;j+=i)
			++freq[j];
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	solve();
	ll ans = 0;
	for(int i = 1; i <= n-1;++i){
		int num = n-i;
		ans += freq[num];
	}
	cout << ans << "\n";
}
