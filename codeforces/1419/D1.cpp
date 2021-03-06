#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> v(n+1);
	for(int i = 1; i <= n;++i){
		cin >> v[i];
	}
	if(n == 1){
		cout << "0\n";
		cout << v[1] << "\n";
		return 0;
	}
	sort(v.begin()+1,v.end());
	vector<int> ans;
	ans.push_back(v[n]);
	int i = 1,j = n-2;
	while(i <= j){
		ans.push_back(v[i]);
		if(i != j)
			ans.push_back(v[j]);
		--j;
		++i;
	}
	ans.push_back(v[n-1]);
	int res = 0;
	for(int i = 1; i < n-1;++i){
		if(ans[i] < ans[i+1] && ans[i] < ans[i-1])
			++res;
	}
	cout << res << "\n";
	for(auto x : ans)
		cout << x << " ";
}
