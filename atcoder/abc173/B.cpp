#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;
int main()
{
	int n;
	cin >> n;
	map<string,int> mp;
	for(int i = 0; i < n;i++){
		string s;
		cin >> s;
		mp[s]++;
	}
	cout << "AC x " << mp["AC"] << "\n";
	cout << "WA x " << mp["WA"] << "\n";
	cout << "TLE x " << mp["TLE"] << "\n";
	cout << "RE x " << mp["RE"] << "\n";
	return 0;
}
