#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin >> n >> m;
	vector<pair<int,int>> point;
	int x = 0,y = m;
	while(x <= n && y >= 0){
		point.push_back({x,y});
		++x;
		--y;
	}
	cout << (int)point.size() << "\n";
	for(auto x : point)
		cout << x.first << " " << x.second << '\n'; 
}
