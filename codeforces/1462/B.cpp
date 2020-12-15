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
		string s;
		cin >> s;
		int flag = 0;
		if(s[n-4] == '2' && s[n-3] == '0' && s[n-2] == '2' && s[n-1] == '0')
			flag = 1;
		else if(s[0] == '2' && s[n-3] == '0' && s[n-2] == '2' && s[n-1] == '0')
			flag = 1;
		else if(s[0] == '2' && s[1] == '0' && s[n-2] == '2' && s[n-1] == '0')
			flag = 1;
		else if(s[0] == '2' && s[1] == '0' && s[2] == '2' && s[n-1] == '0')
			flag = 1;
		else if(s[0] == '2' && s[1] == '0' && s[2] == '2' && s[3] == '0')
			flag = 1;
		else 
			flag = 0;
		if(flag)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
