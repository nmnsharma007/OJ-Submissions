#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin >> s;
	if(s[0] == s[1] && s[1] == s[2]){
		cout << "Won\n";
	}
	else
		cout << "Lost\n";
}
