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
		vector<int> ans;
		for(int i = 1; i <= n;++i){
			ans.push_back(n-i+1);
		}
		if(n%2)
			swap(ans[(n+1)/2-1],ans[(n+1)/2]);
		for(auto x : ans)
			cout << x << " ";
		cout << "\n";
	}
}
