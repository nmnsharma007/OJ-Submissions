#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int q;
	cin >> q;
	while(q--){
		string s,t;
		cin >> s >> t;
		int n = s.length(),m = t.length();
		string s1 = "",s2 = "";
		int len = (n*m)/__gcd(n,m);
		for(int i = 0; i < len/n;++i){
			s1 += s;
		}
		for(int i = 0; i < len/m;++i){
			s2 += t;
		}
		for(int i = 0; i < len;++i){
			if(s1[i] != s2[i]){
				s1 = "-1";
				break;
			}
		}
		cout << s1 << "\n";
	}
}
