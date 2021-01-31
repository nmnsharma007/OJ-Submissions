#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin >> s;
	int n = s.length();
	int ans = 0;
	for(int i = 0; i < n;++i){
		if(s[i] != 'Q')
			continue;
		for(int j = i+1; j < n;++j){
			if(s[j] != 'A')
				continue;
			for(int k = j+1; k < n;++k){
				if(s[k] != 'Q')
					continue;
				++ans;
			}
		}
	}
	cout << ans << "\n";
}
