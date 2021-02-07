#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int n = s.length();
		for(int i = 0; i < n;++i){
			if(i%2 == 0){
				for(char c = 'a';c <= 'z';++c){
					if(c != s[i]){
						s[i] = c;
						break;
					}
				}
			}
			else{
				for(char c = 'z';c >= 'a';--c){
					if(c != s[i]){
						s[i] = c;
						break;
					}
				}
			}
		}
		cout << s << "\n";
	}
}
