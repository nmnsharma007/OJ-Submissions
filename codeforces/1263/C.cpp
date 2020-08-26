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
		set<int> s;
		s.insert(0);
		for(int i = 1; i*i <= n;++i){
			s.insert(n/i);
			int temp = n/i;
			s.insert(n/temp);
		}
		cout << s.size() << "\n";
		for(auto x : s)
			cout << x << " ";
		cout << "\n";
	}
}

