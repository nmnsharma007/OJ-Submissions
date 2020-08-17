#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int q;
	cin >> q;
	while(q--){
		int n;
		cin >> n;
		int maxi = 0;
		vector<int> freq(n+1,0);
		for(int i = 0; i < n;++i){
			int x;
			cin >> x;
			++freq[x];
			maxi = max(maxi,x);
		}
		priority_queue<int> pq;
		for(int i = 1; i <= n;++i){
			if(freq[i])
				pq.push(freq[i]);
		}
		ll ans = 0;
		int after = 1e7;
		while(!pq.empty()){
			int val = pq.top();
			pq.pop();
			if(val < after){
				ans += val;
				after = val;
			}
			else{
				if(after > 1){
					ans += after-1;
					--after;
				}
				else
					break;
			}
		}
		cout << ans << "\n";
	}
}
