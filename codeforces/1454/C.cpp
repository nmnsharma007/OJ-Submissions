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
		int n;
		cin >> n;
		vector<int> a(n+1,0),freq(n+1,0);
		for(int i = 1; i <= n;++i){
			cin >> a[i];
			if(a[i] != a[i-1])
				++freq[a[i]];
		}
		int ans = 1e8;
		for(int i = 1; i <= n;++i){
			if(freq[i] == 0)
				continue;
			if(a[1] == i && a[n] == i)
				ans = min(ans,freq[i]-1);
			else if(a[1] == i || a[n] == i)
				ans = min(ans,freq[i]);
			else
				ans = min(ans,freq[i]+1);
		}
		cout << ans << "\n";
	}
}
