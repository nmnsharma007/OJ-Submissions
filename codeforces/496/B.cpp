#include<bits/stdc++.h>
using namespace std;
using ll = long long;

string solve(string a, string b){
	int d = (10 - (b[0]-'0'))%10;
	for(int i = 0; i < (int)b.length();++i){
		int digit = b[i]-'0';
		int changed = (digit+d)%10;
		b[i] = char(changed+'0');
	}
	if(a == "")
		return b;
	return min(a,b);
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	string s;
	cin >> s;
	string ans = "";
	string temp = s+s;
	for(int i = 0;i < n;++i){
		ans = solve(ans,temp.substr(i,n));
	}
	cout << ans << "\n";
}
