#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> a(n+1);
	for(int i = 1; i <= n;++i){
		cin >> a[i];
	}
	int units = 1e8;
	for(int i = 1; i <= n;++i){
		int cost = 0;
		for(int j = 1; j <= n;++j){
			cost += (abs(j-i) + abs(j-1) + abs(i-1))*2*a[j];
		}
		units = min(units,cost);
	}
	cout << units << "\n";
}
