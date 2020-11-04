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
		ll p,q;
		cin >> p >> q;
		if(p%q)
			cout << p << "\n";
		else{
			ll ans = 0;
			for(int i = 1; i*i<=q;++i){
				if(q%i == 0){
					ll ffactor = i;
					ll sfactor = q/i;
					if(ffactor == 1)
						ffactor = q;
					ll temp = p;
					int cntp = 0,cntq = 0;
					while(temp%ffactor == 0){
						++cntp;
						temp /= ffactor;
					}
					temp = q;
					while(temp%ffactor == 0){
						++cntq;
						temp /= ffactor;
					}
					temp = p;
					int dif = cntp-cntq+1;
					while(dif--){
						temp /= ffactor; 
					}
					ans = max(ans,temp);
					temp = p;
					cntp = 0,cntq = 0;
					while(temp%sfactor == 0){
						++cntp;
						temp /= sfactor;
					}
					temp = q;
					while(temp%sfactor == 0){
						++cntq;
						temp /= sfactor;
					}
					temp = p;
					dif = cntp-cntq+1;
					while(dif--){
						temp /= sfactor; 
					}
					ans = max(ans,temp);
				}
			}
			cout << ans << "\n";
		}
	}
}
