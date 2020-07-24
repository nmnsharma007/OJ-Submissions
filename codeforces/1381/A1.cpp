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
		for(int i = 0; i < n;++i){
			if(a[i] == b[i])
				continue;
			if(i == 0)
				ans.push_back(1);
			else{
				ans.push_back(i+1);
				ans.push_back(1);
				ans.push_back(i+1);
			}
		}
		cout << ans.size() << " ";
		for(auto x : ans)
			cout << x << " ";
		cout << "\n";
	}
}