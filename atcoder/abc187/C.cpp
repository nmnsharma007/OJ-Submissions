#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	map<string,int> mp;
	string ans = "satisfiable";
	for(int i = 0; i < n;++i){
		string s;
		cin >> s;
		int x = s.length();
		if(s[0] == '!'){
			string temp = s.substr(1,x-1);
			if(mp.count(temp))
				ans = temp;
		}
		else{
			string temp = "!";
			temp = temp + s;
			if(mp.count(temp))
				ans = s;
		}
		++mp[s];
	}
	cout << ans << "\n";
}
