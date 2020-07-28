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
		ll k,l;
		cin >> k >> l;
		ll depth[n+1];
		vector<int> safe;
		safe.push_back(0);
		for(int i = 1; i <= n;++i){
			cin >> depth[i];
			if(depth[i] + k <= l)
				safe.push_back(i);
		}
		safe.push_back(n+1);
		bool ok = true;
		for(int i = 1; i < (int)safe.size()&&ok;++i){
			bool down = true;
			ll tide = k;
			for(int j = safe[i-1]+1; j < safe[i];++j){
				tide += down ? -1 : 1;
				if(l < depth[j]){
					ok = false;
					break;
				}
				if(tide + depth[j] > l && down == false){
					ok = false;
					break;
				}
				if(tide + depth[j] > l)
					tide -= tide-(l - depth[j]);
				if(tide == 0)
					down = false;
				else if(tide == k)
					down = true;
			}
		}
		if(ok)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}