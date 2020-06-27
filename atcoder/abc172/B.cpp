#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;
int main()
{
	string s,t;
	cin >> s >> t;
	int count = 0;
	for(int i=0;i<(int)s.length();i++){
		if(s[i] != t[i])
			count++;
	}
	cout << count << "\n";
	return 0;
}
