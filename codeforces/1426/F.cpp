#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;
ll power(ll x,int y){
	if(y == 0)
		return 1;
	ll res = 1;
	while(y){
		if(y%2)
			res = (res*x)%MOD;
		x = (x*x)%MOD;
		y /= 2LL;
	}
	return res;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	string s;
	cin >> s;
	vector<int> numa(n,0),numc(n,0);
	int cntq = 0;
	for(int i = 0; i < n;++i){
		if(s[i] == 'a'){
			if(i == 0)
				numa[i] = 1;
			else
				numa[i] = numa[i-1] + 1;
		}
		else if(i != 0)
			numa[i] = numa[i-1];
		if(s[i] == '?')
			++cntq;
	}
	for(int i = n-1; i >= 0;--i){
		if(s[i] == 'c'){
			if(i == n-1)
				numc[i] = 1;
			else
				numc[i] = numc[i+1] + 1;
		}
		else if(i != n-1)
			numc[i] = numc[i+1];
	}
	int cnt = 0;
	ll ans = 0;
	for(int i = 0; i < n;++i){
		if(s[i] == 'b'){
			ll num1 = (power(3LL,cnt)*numa[i]+cnt*power(3LL,cnt-1));
			ll cnt2 = cntq-cnt;
			ll num2 = (power(3LL,cnt2)*numc[i]+cnt2*power(3LL,cnt2-1));
			ans = (ans + ((num1%MOD)*(num2%MOD))%MOD)%MOD;

		}
		if(s[i] == '?'){
			ll num1 = (power(3LL,cnt)*numa[i]+cnt*power(3LL,cnt-1));
			++cnt;
			ll cnt2 = cntq-cnt;
			ll num2 = (power(3LL,cnt2)*numc[i]+cnt2*power(3LL,cnt2-1));
			ans = (ans + ((num1%MOD)*(num2%MOD))%MOD)%MOD;
		}
	}
	cout << ans << "\n";
}	
