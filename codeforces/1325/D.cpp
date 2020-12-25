#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll u,v;
	cin >> u >> v;
	if(u > v)
		cout << "-1\n";
	else if(u == v){
		if(u != 0LL){
			cout << "1\n";
			cout << u << "\n";
		}
		else
			cout << "0\n";
	}
	else if(u%2LL == v%2LL){
		ll num = (v-u)/2LL;
		if(((u+num)^num) == u){
			cout << "2\n";
			cout << u+num << " " << num << "\n";
		}
		else{
			if(u != 0LL){
				cout << "3\n";
				cout << u << " " << num << " " << num << "\n";
			}
			else{
				cout << "2\n";
				cout << num << " " << num << "\n";
			}
		}
	}
	else
		cout << "-1\n";
}
