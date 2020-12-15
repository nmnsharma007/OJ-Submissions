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
		int x;
		cin >> x;
		vector<int> ans;
		if(x > 45)
			cout << "-1\n";
		else{
			for(int i = 9; i >= 1;--i){
				if(x < i)
					continue;
				x -= i;
				ans.push_back(i);
			}
			reverse(ans.begin(),ans.end());
			for(auto x : ans)
				cout << x;
			cout << "\n";
		}
	}
}
