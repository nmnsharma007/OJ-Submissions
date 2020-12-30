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
		vector<int> x(n);
		for(int i = 0; i < n;++i){
			cin >> x[i];
		}
		sort(x.begin(),x.end());
		vector<int> freq(2*n+5,0);
		int ans = 0;
		for(int i = 0; i < n;++i){
			if(freq[x[i]] == 0){
				++freq[x[i]];
				++ans;
			}
			else{
				if(freq[x[i]+1] == 0){
					++freq[x[i]+1];
					++ans;
				}
			}
		}
		cout << ans << "\n";
	}
}
