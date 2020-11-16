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
		int n,m;
		cin >> n >> m;
		for(int i = 0; i < n;++i){
			for(int j = 0; j < m;++j){
				int x;
				cin >> x;
				if((i+j)%2 == 0 && x%2 == 1)
					++x;
				else if((i+j)%2 == 1 && x%2 == 0)
					++x;
				cout << x << " ";
			}
			cout << "\n";
		}
	}
}
