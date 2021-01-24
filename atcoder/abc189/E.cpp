#include<bits/stdc++.h>
using namespace std;
using ll = long long;

struct matrix{
	ll arr[3][3] = {0};
};

matrix mul(matrix &p,matrix &q){
	matrix ans;
	for(int i = 0; i < 3;++i){
		for(int j = 0; j < 3;++j){
			for(int k = 0; k < 3;++k){
				ans.arr[i][j] += p.arr[i][k] * q.arr[k][j];
			}
		}
	}
	return ans;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<vector<ll>> points(n,vector<ll> (3));
	for(int i = 0; i < n;++i){
		int x,y;
		cin >> x >> y;
		points[i][0] = x;
		points[i][1] = y;
		points[i][2] = 1;
	}
	int m;
	cin >> m;
	vector<matrix> ops;
	matrix cur;
	cur.arr[0][0] = cur.arr[1][1] = cur.arr[2][2] = 1;
	ops.push_back(cur);
	for(int i = 0; i < m;++i){
		int op;
		cin >> op;
		matrix mat;
		if(op == 1){
			mat.arr[0][1] = 1;
			mat.arr[1][0] = -1;
		}
		else if(op == 2){
			mat.arr[0][1] = -1;
			mat.arr[1][0] = 1;
		}
		else if(op == 3){
			int p;
			cin >> p;
			mat.arr[0][0] = -1;
			mat.arr[0][2] = 2*p;
			mat.arr[1][1] = 1;
		}
		else{
			int p;
			cin >> p;
			mat.arr[0][0] = 1;
			mat.arr[1][1] = -1;
			mat.arr[1][2] = 2*p;
		}
		mat.arr[2][2] = 1;
		cur = mul(mat,cur);
		ops.push_back(cur);
	}
	int q;
	cin >> q;
	while(q--){
		int a,b;
		cin >> a >> b;
		ll x = 0,y = 0;
		--b;
		for(int i = 0; i < 3;++i){
			x += ops[a].arr[0][i] * points[b][i];
			y += ops[a].arr[1][i] * points[b][i];
		}
		cout << x << " " << y << "\n";
	}
}
