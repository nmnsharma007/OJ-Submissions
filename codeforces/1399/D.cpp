#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string s;
		cin >> s;
		queue<int> q[2];
		int ans[n];
		int k = 0;
		for(int i = 0; i < n;++i){
			int d = s[i] - '0';
			if(!q[d].empty()){
				int val = q[d].front();
				q[d].pop();
				ans[i] = val;
				q[1-d].push(val);
			}
			else{
				q[1-d].push(++k);
				ans[i] = k;
			}
		}
		cout << k << "\n";
		for(auto x : ans)
			cout << x << " ";
		cout << "\n";
	}
}