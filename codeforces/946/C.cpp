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
	char c = 'a';
	for(int i = 0; i < n;++i){
		if(s[i] <= c && c <= 'z'){
			s[i] = c;
			++c;
		}
	}
	if(c > 'z')
		cout << s << "\n";
	else
		cout << "-1\n";
}
