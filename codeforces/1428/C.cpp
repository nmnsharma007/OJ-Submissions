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
		stack<char> st;
		for(int i = 0; i < n;++i){
			if(s[i] == 'B'){
				if(st.empty())
					st.push('B');
				else
					st.pop();
			}
			else
				st.push('A');
		}
		cout << st.size() << "\n";
	}
}
