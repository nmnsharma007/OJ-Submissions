#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	int n,k;
	cin >> n >> k;
	vector<ll> v(n);
	for(int i = 0; i < n;++i){
		cin >> v[i];
	}
	vector<ll> partial(n,0LL);
	ll sum = 0;
	for(int i = 0; i < k-1;++i){
		sum += v[i];
	}
	for(int i = k-1; i < n;++i){
		sum += v[i];
		partial[i-k+1] = sum;
		sum -= v[i-k+1];
	}
	vector<pair<ll,int> > left(n),right(n);
	left[0] = {partial[0],0};
	right[n-1] = {partial[n-1],n-1};
	for(int i = 1; i < n;++i){
		if(partial[i] > left[i-1].first)
			left[i] = {partial[i],i};
		else
			left[i] = left[i-1];
	}
	for(int i = n-2; i >= 0;--i){
		if(partial[i] >= right[i+1].first)
			right[i] = {partial[i],i};
		else
			right[i] = right[i+1];
	}
	sum = 0;
	int a = -1,b = -1;
	for(int i = 0; i <= n-1;++i){
		if(i-k >= 0 && partial[i]+left[i-k].first > sum){
			sum = partial[i] + left[i-k].first;
			a = i;
			b = left[i-k].second;
		}
		if(i+k < n && partial[i]+right[i+k].first > sum){
			sum = partial[i]+right[i+k].second;
			a = i;
			b = right[i+k].second;
		}
	}
	cout << min(a+1,b+1) << " " << max(a+1,b+1) << "\n";
}