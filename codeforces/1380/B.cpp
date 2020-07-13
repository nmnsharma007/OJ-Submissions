#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		string ans = "";
		vector<int> v(3);
		for(int i = 0; i < (s.length());i++){
			if(s[i] == 'R')
				v[0]++;
			else if(s[i] == 'P')
				v[1]++;
			else
				v[2]++;
		}
		int index = 0;
		if(v[1] > v[0])
			index = 1;
		if(v[2] > v[index])
			index = 2;
		for(int i = 0; i < (int)s.length();i++){
			if(index == 0)
				ans += 'P';
			else if(index == 1)
				ans += 'S';
			else
				ans += 'R';
		}
		cout << ans << "\n";
	}
}