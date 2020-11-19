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
		int ans = 0;
		stack<char> st1,st2;
		for(int i = 0; i < (int)s.length();++i){
			if(s[i] == '(')
				st1.push(s[i]);
			else if(s[i] == '[')
				st2.push(s[i]);
			else{
				if(s[i] == ')' && !st1.empty() && st1.top() == '('){
					++ans;
					st1.pop();
				}
				else if(s[i] == ']' && !st2.empty() && st2.top() == '['){
					++ans;
					st2.pop();
				}
			}
		}
		cout << ans << "\n";
	}
}
