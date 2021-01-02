#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(vector<ll> &a,vector<ll> &pref,set<ll> &sums,int lx,int rx){
	if(lx > rx)
		return;
	if(lx == rx){
		sums.insert(a[lx]);
		return;
	}
	if(lx > 0)
		sums.insert(pref[rx]-pref[lx-1]);
	else
		sums.insert(pref[rx]);
	ll mid = (a[lx]+a[rx])/2LL;
	int index = lower_bound(a.begin(),a.end(),mid+1) - a.begin();
	--index;
	if(index >= lx){
		if(lx == 0)
			sums.insert(pref[index]);
		else
			sums.insert(pref[index] - pref[lx-1]);
	}
	if(rx > index){
		sums.insert(pref[rx]-pref[index]);
	}
	if(index >= lx && index < rx)
		solve(a,pref,sums,lx,index);
	if(index+1 <= rx)
		solve(a,pref,sums,index+1,rx);
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n,q;
		cin >> n >> q;
		vector<ll> a(n),pref(n);
		for(int i = 0; i < n;++i){
			cin >> a[i];
		}
		sort(a.begin(),a.end());
		for(int i = 0; i < n;++i){
			if(i > 0)
				pref[i] = pref[i-1] + a[i];
			else
				pref[i] = a[i];
		}
		set<ll> sums;
		solve(a,pref,sums,0,n-1);
		while(q--){
			ll s;
			cin >> s;
			if(sums.find(s) != sums.end())
				cout << "Yes\n";
			else
				cout << "No\n";
		}
	}
}
