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
		int n;
		cin >> n;
		vector<int> x(n);
		set<double> s;
		for(int i = 0; i < n;++i){
			cin >> x[i];
		}
		for(int i = 0; i < n;++i){
			for(int j = i+1; j < n;++j){
				s.insert((x[j]-x[i])/2.0);
			}
		}
		cout << (int)s.size() << "\n";
	}
}
