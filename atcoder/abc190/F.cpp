#include<bits/stdc++.h>
using namespace std;
using ll = long long;

struct segtree{
	int size;
	vector<int> values;

	void init(int n){
		size = 1;
		while(size < n){
			size *= 2;
		}
		values.assign(2*size,0);
	}

	int solve(int l,int r){
		return solve(l,r,0,0,size);
	}

	int solve(int l,int r,int x,int lx,int rx){
		if(l >= rx || lx >= r)
			return 0;
		if(lx >= l && rx <= r)
			return values[x];
		int m = (lx+rx)/2;
		int s1 = solve(l,r,2*x+1,lx,m);
		int s2 = solve(l,r,2*x+2,m,rx);
		return s1+s2;
	}

	void set(int i){
		set(i,0,0,size);
	}

	void set(int i,int x,int lx,int rx){
		if(rx-lx == 1){
			if(lx == i)
				values[x] = 1;
			return;
		}
		int m = (lx+rx)/2;
		if(i < m)
			set(i,2*x+1,lx,m);
		else
			set(i,2*x+2,m,rx);
		values[x] = values[2*x+1] + values[2*x+2];
	}
};

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n;++i){
		cin >> a[i];
	}
	struct segtree st;
	st.init(n);
	ll ans = 0;
	for(int i = 0; i < n;++i){
		ans += st.solve(a[i]+1,n);
		st.set(a[i]);
	}
	cout << ans << "\n";
	for(int i = 1; i < n;++i){
		ans = ans + n - 1 - a[i-1] - a[i-1];
		cout << ans << "\n";
	}
}
