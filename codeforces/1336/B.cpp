#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll sq(ll n)
{
	n = abs(n);
	return n*n;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int nr,ng,nb;
		cin >> nr >> ng >> nb;
		set<ll> s1,s2,s3;
		for(int i = 0; i < nr;++i){
			ll x;
			cin >> x;
			s1.insert(x);
		}
		for(int i = 0; i < ng;++i){
			ll x;
			cin >> x;
			s2.insert(x);
		}
		for(int i = 0; i < nb;++i){
			ll x;
			cin >> x;
			s3.insert(x);
		}
		vector<ll> red,blue,green;
		for(auto x : s1){
			red.push_back(x);
		}
		for(auto x : s2){
			green.push_back(x);
		}
		for(auto x : s3){
			blue.push_back(x);
		}
		ng = green.size(),nb = blue.size(),nr = red.size();
		ll ans = LLONG_MAX;
		for(int i = 0; i < ng;++i){
			int index1 = lower_bound(red.begin(),red.end(),green[i]) - red.begin();
			int index2 = lower_bound(blue.begin(),blue.end(),green[i]) - blue.begin();
			if(index1 >= nr || red[index1] > green[i])
				--index1;
			if(index2 >= nb || blue[index2] > green[i])
				--index2;
			ans = min(ans,sq(green[i]-red[max(0,index1)]) + sq(green[i]-blue[min(nb-1,index2+1)]) + sq(blue[min(nb-1,index2+1)]-red[max(0,index1)]));
			ans = min(ans,sq(green[i]-red[min(nr-1,index1+1)]) + sq(green[i]-blue[max(0,index2)]) + sq(blue[max(0,index2)]-red[min(nr-1,index1+1)]));
			ans = min(ans,sq(green[i]-red[max(0,index1)]) + sq(green[i]-blue[max(0,index2)]) + sq(blue[max(0,index2)]-red[max(0,index1)]));
		}
		for(int i = 0; i < nr;++i){
			int index1 = lower_bound(green.begin(),green.end(),red[i]) - green.begin();
			int index2 = lower_bound(blue.begin(),blue.end(),red[i]) - blue.begin();
			if(index1 >= ng || green[index1] > red[i])
				--index1;
			if(index2 >= nb || blue[index2] > red[i])
				--index2;
			ans = min(ans,sq(red[i]-green[max(0,index1)]) + sq(red[i]-blue[min(nb-1,index2+1)]) + sq(blue[min(nb-1,index2+1)]-green[max(0,index1)]));
			ans = min(ans,sq(red[i]-green[min(ng-1,index1+1)]) + sq(red[i]-blue[max(0,index2)]) + sq(blue[max(0,index2)]-green[min(ng-1,index1+1)]));
			ans = min(ans,sq(red[i]-blue[max(0,index2)]) + sq(red[i]-green[max(0,index1)]) + sq(green[max(0,index1)]-blue[max(0,index2)]));
		}
		for(int i = 0; i < nb;++i){
			int index1 = lower_bound(red.begin(),red.end(),blue[i]) - red.begin();
			int index2 = lower_bound(green.begin(),green.end(),blue[i]) - green.begin();
			if(index1 >= nr || red[index1] > blue[i])
				--index1;
			if(index2 >= ng || green[index2] > blue[i])
				--index2;
			ans = min(ans,sq(blue[i]-red[max(0,index1)]) + sq(blue[i]-green[min(ng-1,index2+1)]) + sq(green[min(ng-1,index2+1)]-red[max(0,index1)]));
			ans = min(ans,sq(blue[i]-red[min(nr-1,index1+1)]) + sq(blue[i]-green[max(0,index2)]) + sq(green[max(0,index2)]-red[min(nr-1,index1+1)]));
			ans = min(ans,sq(blue[i]-red[max(0,index1)]) + sq(blue[i]-green[max(0,index2)]) + sq(green[max(0,index2)]-red[max(0,index1)]));
		}
		cout << ans << "\n";
	}
}
