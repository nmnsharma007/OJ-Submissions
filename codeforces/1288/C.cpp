#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin >> n >> m;
	ll C[n+2*m][n];
	memset(C,0LL,sizeof(C));
	for(int i = 1; i < n+2*m;++i){
		for(int j = 0; j <= min(i,n-1);++j){
			if(j == 0 || j == i)
				C[i][j] = 1;
			else
				C[i][j] = (C[i-1][j-1] + C[i-1][j])%MOD;
		}
	}
	cout << C[n+2*m-1][n-1] << "\n";
}
