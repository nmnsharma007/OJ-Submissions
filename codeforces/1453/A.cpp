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
		vector<int> freq(101,0);
		for(int i = 0; i < n;++i){
			int x;
			cin >> x;
			++freq[x];
		}
		int ans = 0;
		for(int i = 0; i < m;++i){
			int x;
			cin >> x;
			if(freq[x])
				++ans;
		}
		cout << ans << "\n";
	}
}
