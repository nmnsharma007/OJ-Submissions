#include<bits/stdc++.h>
using namespace std;
using ll = long long;

struct segtree{
	int size;
	vector<ll> values;

	void init(int n){
		size = 1;
		while(size < n){
			size *= 2;
		}
		values.assign(2*size,0LL);
	}

	void build(vector<ll> &a){
		build(a,0,0,size);
	}

	void build(vector<ll> &a,int x,int lx,int rx){
		if(rx - lx == 1){
			if(lx < (int)a.size()){
				values[x] = a[lx];
			}
			return;
		}
		int m = (lx+rx)/2;
		build(a,2*x+1,lx,m);
		build(a,2*x+2,m,rx);
		values[x] = values[2*x+1] ^ values[2*x+2];
	}

	void set(int i,ll v){
		set(i,v,0,0,size);
	}

	void set(int i,ll v,int x,int lx,int rx){
		if(rx-lx == 1){
			values[x] = v ^ values[x];
			return;
		}
		int m = (lx+rx)/2;
		if(i < m){
			set(i,v,2*x+1,lx,m);
		}
		else{
			set(i,v,2*x+2,m,rx);
		}
		values[x] = values[2*x+1] ^ values[2*x+2];
	}

	ll solve(int l,int r){
		return solve(l,r,0,0,size);
	}

	ll solve(int l,int r,int x,int lx,int rx){
		if(lx >= l && r >= rx)
			return values[x];
		if(rx <= l || lx >= r)
			return 0LL;
		int m = (lx+rx)/2;
		ll s1 = solve(l,r,2*x+1,lx,m);
		ll s2 = solve(l,r,2*x+2,m,rx);
		return s1^s2;
	}
};

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,q;
	cin >> n >> q;
	struct segtree st;
	st.init(n);
	vector<ll> a(n);
	for(int i = 0; i < n;++i){
		cin >> a[i];
	}
	st.build(a);
	while(q--){
		int op;
		cin >> op;
		if(op == 1){
			int i;
			ll v;
			cin >> i >> v;
			st.set(i-1,v);
		}
		else{
			int x,y;
			cin >> x >> y;
			cout << st.solve(x-1,y) << "\n";
		}
	}
}
