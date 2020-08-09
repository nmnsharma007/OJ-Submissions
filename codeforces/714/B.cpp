#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	set<int> s;
	for(int i = 0; i < n;++i){
		int x;
		cin >> x;
		s.insert(x);
	}
	if(s.size() >= 4)
		cout << "NO\n";
	else{
		if(s.size() <= 2)
			cout << "YES\n";
		else{
			vector<int> ans;
			set<int> :: iterator it;
			for(it = s.begin();it != s.end();++it){
				ans.push_back(*it);
			}
			if(ans[1]-ans[0] == ans[2]-ans[1])
				cout << "YES\n";
			else
				cout << "NO\n";
		}
	}
}
