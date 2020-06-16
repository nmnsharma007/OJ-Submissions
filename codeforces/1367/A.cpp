#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
using ll = long long;
int main()
{
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		string ans = "";
		ans += s[0];
		for(int i=1;i<s.length()-1;i+=2)
			ans += s[i];
		ans += s[s.length()-1];
		cout << ans << "\n";
	}
	return 0;
}

