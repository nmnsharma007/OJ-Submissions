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
	for(int i = 0; i < n;++i){
		if(i%2 == 0 && s[i] >= 'a' && s[i] <= 'z')
			continue;
		if(i%2 && s[i] >= 'A' && s[i] <= 'Z')
			continue;
		cout << "No\n";
		return 0;
	}
	cout << "Yes\n";
}
