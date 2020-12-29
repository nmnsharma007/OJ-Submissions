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
		int n,k;
		cin >> n >> k;
		int h[n];
		for(int i = 0; i < n;++i){
			cin >> h[i];
		}
		int lower,upper;
		bool exist = true;
		for(int i = 0; i < n;++i){
			if(i == 0){
				lower = h[i];
				upper = h[i];
			}
			else{
				int poss_lower = h[i];
				int poss_upper = h[i] + k-1;
				if(i == n-1)
					poss_upper = h[i];
				if(poss_upper < lower - k +1){
					exist = false;
					break;
				}
				if(poss_lower > upper+k-1){
					exist = false;
					break;
				}
				lower = max(poss_lower,lower-k+1);
				upper = min(poss_upper,upper+k-1);
			}
		}
		if(exist)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
