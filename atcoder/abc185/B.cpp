#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll n,m,t;
	cin >> n >> m >> t;
	ll start[m],end[m];
	for(int i = 0; i < m;++i){
		cin >> start[i] >> end[i];
	}
	ll battery = n;
	ll prev = 0;
	int flag = 1;
	for(int i = 0;i < m;++i){
		battery -= (start[i] - prev);
		if(battery <= 0){
			flag = 0;
			break;
		}
		prev = end[i];
		battery = min(n,battery + end[i]-start[i]);
	}
	battery -= t-prev;
	if(battery <= 0)
		flag = 0;
	if(flag)
		cout << "Yes\n";
	else
		cout << "No\n";
}