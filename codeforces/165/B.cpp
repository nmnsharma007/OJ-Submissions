#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool is_possible(ll n,ll v,ll k)
{
	ll sum = 0;
	for(ll i = 1;;i *= k){
		if(v/i == 0)
			break;
		sum += v/i;
	}
	return sum >= n;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	ll n,k;
	cin >> n >> k;
	ll left = 1,right = n*k;
	ll ans = 1e14;
	while(left <= right){
		ll mid = left + (right-left)/2LL;
		if(is_possible(n,mid,k)){
			right = mid-1;
			ans = min(ans,mid);
		}
		else
			left = mid+1;
	}
	cout << ans << "\n";
}
