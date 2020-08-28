#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	ll arr[n+1];
	arr[0] = 0;
	for(int i = 1; i <= n;++i){
		cin >> arr[i];
		arr[i] += arr[i-1];
	}
	ll ans = 0;
	set<ll> s = {0};
	int left = 1;
	int right = 1;
	while(left <= n){
		while(right <= n && s.find(arr[right]) == s.end()){
			s.insert(arr[right]);
			++right;
		}
		ans += right - left;
		s.erase(arr[left-1]);
		++left;
	}
	cout << ans << "\n";
}
