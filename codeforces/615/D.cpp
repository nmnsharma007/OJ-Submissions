#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;
const int N = 2*1e5+1;

int power(int x,int y){
	int res = 1;
	while(y){
		if(y%2)
			res = (res*1LL*x)%MOD;
		x = (x*1LL*x)%MOD;
		y /= 2;
	}
	return res;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int m;
	cin >> m;
	int d = 1,prod = 1;
	vector<int> freq(N,0);
	for(int i = 0; i < m;++i){
		int p;
		cin >> p;
		++freq[p];
	}
	for(int i = 2; i < N;++i){
		if(freq[i] == 0)
			continue;
		int x = i;
		int k = freq[i];
		int exp = ((k*1LL*(k+1))/2LL)%(MOD-1);
		int fp = power(x,exp);
		prod = (power(prod,k+1) * 1LL * power(fp,d))%MOD;
		d = (d * 1LL * (k+1))%(MOD-1);
	}
	cout << prod << "\n";
}
