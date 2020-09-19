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
	if(s[n-1] == 's')
		cout << s << "es\n";
	else
		cout << s << "s\n";
}
