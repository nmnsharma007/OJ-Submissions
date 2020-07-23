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
		int ans = -1;
		vector<int> freq(1001);
		for(int i = 0; i < n;++i){
			int x;
			cin >> x;
			freq[x]++;
		}
		for(int i = 0; i < m;++i){
			int x;
			cin >> x;
			if(freq[x])
				ans = x;
		}
		if(ans == -1)
			cout << "NO\n";
		else{
			cout << "YES\n";
			cout << "1 " << ans << "\n";
		}
	}
}