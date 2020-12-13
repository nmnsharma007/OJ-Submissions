#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int l;
	cin >> l;
	ll C[l][12];
	for(int i = 0; i < l;++i){
		for(int j = 0; j <= min(i,11);++j){
			if(j == 0 || j == i){
				C[i][j] = 1;
				continue;
			}
			C[i][j] = C[i-1][j] + C[i-1][j-1];
		}
	}
	cout << C[l-1][11] << "\n";
}
