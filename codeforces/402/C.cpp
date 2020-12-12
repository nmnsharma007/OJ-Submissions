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
		int n,p;
		cin >> n >> p;
		int edges = 2*n+p;
		for(int i = 1; i <= n;++i){
			for(int j = n; j > i;--j){
				if(edges > 0){
					cout << i << " " << j << "\n";
					--edges;
				}
				else
					break;
			}
		}
	}
}
