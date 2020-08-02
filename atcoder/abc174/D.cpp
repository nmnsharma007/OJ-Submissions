#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	string s;
	cin >> s;
	int red = 0,white = 0;
	for(int i = 0; i < n;++i){
		if(s[i] == 'R')
			++red;
		else
			++white;
	}
	int ans = 0;
	for(int i = 0; i < red;++i){
		if(s[i] == 'W')
			++ans;
	}
	cout << ans << "\n";
}