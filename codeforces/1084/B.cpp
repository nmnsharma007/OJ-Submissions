#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e3+5;
vector<ll> v(N);
bool is_possible(ll amount,ll n,ll s)
{
	ll total = 0;
	for(int i = 1; i <= n;++i){
		if(v[i] < amount)
			return false;
		total += v[i]-amount;
		if(total >= s)
			return true;
	}
	return false;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll n,s;
	cin >> n >> s;
	ll sum = 0,mini = 1e9+7;
	for(int i = 1; i <= n;++i){
		cin >> v[i];
		sum += v[i];
	}
	sort(v.begin()+1,v.begin()+n+1);
	if(sum < s)
		cout << "-1\n";
	else{
		ll left = 0,right = 1e9+10;
		ll ans = 0;
		while(left <= right){
			ll mid = (left+right)/2LL;
			if(is_possible(mid,n,s)){
				ans = max(ans,mid);
				left = mid+1;
			}
			else
				right = mid-1;
		}
		cout << ans << "\n";
	}
}