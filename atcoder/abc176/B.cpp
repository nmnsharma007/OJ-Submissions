#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin >> s;
	ll sum = 0;
	for(int i = 0; i < (int)s.length();++i){
		sum += s[i] - '0';
	}
	if(sum % 9 == 0)
		cout << "Yes\n";
	else
		cout << "No\n";
}
