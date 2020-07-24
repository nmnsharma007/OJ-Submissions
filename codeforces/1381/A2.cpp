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
		string a,b;
		cin >> a >> b;
		vector<int> ans;
		bool flip = false;
		for(int i = 0; i < n;++i){
			if(i&1)
				flip = true;
			else
				flip = false;
			int index = (i&1) ? (n-((i+1)/2)) : i/2;
			char c = a[index];
			if(flip)
				c = (c == '1') ? '0' : '1';
			if(c == b[n-i-1])
				ans.push_back(1);
			ans.push_back(n-i);
		}
		cout << ans.size() << " ";
		for(auto x : ans)
			cout << x << " ";
		cout << "\n";
	}
}