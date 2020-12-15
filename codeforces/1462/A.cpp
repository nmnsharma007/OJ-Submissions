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
		vector<int> v(n),ans;
		for(int i = 0; i < n;++i){
			cin >> v[i];
		}
		int left = 0,right = n-1;
		int cnt = 1;
		while(left <= right){
			if(cnt%2 == 1)
				ans.push_back(v[left++]);
			else
				ans.push_back(v[right--]);
			++cnt;
		}
		for(auto x : ans)
			cout << x << " ";
		cout << "\n";
	}
}
