#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e6+1;
vector<int> spf(N+1,0);

void soe()
{
	spf[1] = 1;
	for(int i = 2; i <= N;++i){
		for(int j = i; j <= N;j+=i){
			if(spf[j] == 0)
				spf[j] = i;
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	soe();
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int arr[n];
		map<int,int> mp;
		int first_ans = 0;
		for(int i = 0; i < n;++i){
			cin >> arr[i];
			int temp = arr[i];
			int val = 1;
			while(temp > 1){
				int factor = spf[temp];
				int power = 0;
				while(temp > 1 && temp%factor == 0){
					temp /= factor;
					++power;
				}
				if(power%2 == 1){
					val *= factor;
				}
			}
			++mp[val];
			first_ans = max(first_ans,mp[val]);
		}
		int second_ans = 0;
		for(auto x : mp){
			if(x.first == 1)
				continue;
			if(x.second%2 == 0){
				mp[1] += x.second;
			}
			else{
				second_ans = max(second_ans,x.second);
			}
		}
		second_ans = max(second_ans,mp[1]);
		int q;
		cin >> q;
		while(q--){
			ll w;
			cin >> w;
			if(w == 0)
				cout << first_ans << '\n';
			else
				cout << second_ans << '\n';
		}
	}
}
