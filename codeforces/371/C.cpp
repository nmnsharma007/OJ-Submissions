#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll xb = 0,xs = 0,xc = 0;
ll nb,ns,nc,pb,ps,pc,r;
bool is_possible(ll num)
{
	if(num == 0)
		return true;
	ll needb,needc,needs;
	if(xb)
		needb = max(0LL,num * xb - nb);
	else
		needb = 0;
	if(xs)
		needs = max(0LL,num * xs - ns);
	else
		needs = 0;
	if(xc)
		needc = max(0LL,num * xc - nc);
	else
		needc = 0;
	ll cost = needb * pb + needs * ps + needc * pc;
	if(cost <= r)
		return true;
	else
		return false;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin >> s;
	for(int i = 0; i < (int)s.length();++i){
		if(s[i] == 'B')
			++xb;
		if(s[i] == 'S')
			++xs;
		if(s[i] == 'C')
			++xc;
	}
	cin >> nb >> ns >> nc;
	cin >> pb >> ps >> pc;
	cin >> r;
	ll left = 0;
	ll right = 1e14;
	ll ans = 0;
	while(left < right){
		ll mid = (left+right+1)/2LL;
		if(is_possible(mid)){
			left = mid;
			ans = mid;
		}
		else
			right = mid-1;
	}
	cout << ans << "\n";
}
