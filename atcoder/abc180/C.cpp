#include <bits/stdc++.h>
using namespace std;


typedef long long ll; 
vector<ll> Vec;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll N; cin>>N;
	for(ll i = 1; i * i <= N; i++){
		if ( N % i == 0){
			ll j = N / i;
			Vec.push_back(i);
       		if(i != j)
			Vec.push_back(j);
		}
	}
	sort(Vec.begin(), Vec.end());
	for(int j = 0; j < Vec.size(); j++) 
        cout << Vec.at(j) <<"\n";
	return 0;
}