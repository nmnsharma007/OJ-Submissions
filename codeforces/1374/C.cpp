#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string s;
		cin >> s;
		stack<char> st;
		int ans = 0;
		for(int i=0;i<n;i++){
			if(s[i] == ')'){
				if(!st.empty() && st.top() == '('){
					st.pop();
					continue;
				}
				else{
					st.push(s[i]);
				}
			}
			else
				st.push(s[i]);
		}
		ans = (int)st.size();
		cout << ans/2 << "\n";
	}
	return 0;
}
