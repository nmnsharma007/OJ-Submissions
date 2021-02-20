#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool is_possible(string s,ll base,ll m){
	ll num = 0;
	for(int i = 0; i < (int)s.length();++i){
		ll add = 1;
		ll d = (ll)(s[i]-'0');
		if(d == 0)
			continue;
		for(int j = 1; j <= i;++j){
			if(add > m/base)
				return false;
			add *= base;
		}
		if(add > m/d)
			return false;
		add *= d;
		if(num > m-add)
			return false;
		num += add;
	}
	return num <= m;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin >> s;
	int n = s.length();	
	ll m;
	cin >> m;
	if(n == 1){
		int digit = s[0] - '0';
		if(digit <= m)
			cout << "1\n";
		else
			cout << "0\n";
		return 0;
	}
	reverse(s.begin(),s.end());
	int digit = 0;
	for(int i = 0 ; i < n;++i){
		int d = s[i]-'0';
		digit = max(digit,d);
	}
	ll left = digit+1;
	ll right = 1e18+10;
	ll ans = 0;
	while(left <= right){
		ll mid = (left+right)/2;
		if(is_possible(s,mid,m)){
			left = mid+1;
			ans = max(ans,mid);	
		}
		else
			right = mid-1;
	}
	cout << max(0LL,ans-digit) << "\n";
}
