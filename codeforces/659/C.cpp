#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	ll m;
	cin >> n >> m;
	set<ll> s;
	ll sum = 0;
	for(int i = 0; i < n;i++){
		ll x;
		cin >> x;
		s.insert(x);
	}
	vector<ll> ans;
	ll temp = 0;
	for(int i = 1; i <= 1e9;i++){
		if(s.find(i) != s.end())
			sum += i;
		temp += i;
		if(temp - sum > m){
			break;
		}
		if(s.find(i) == s.end()){
			ans.push_back(i);
		}
	}
	cout << (int)ans.size() << "\n";
	for(auto x : ans)
		cout << x << " ";
	cout << "\n";
}
