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
		int ans = 0;
		for(char i = '0';i <= '9';++i){
			for(char j = '0'; j <= '9';++j){
				int second = -1;
				int count = 0;
				bool first = true;
				for(int l = 0; l < n;++l){
					if(s[l] == i && first){
						++count;
						first = false;
						continue;
					}
					if(s[l] == j && first == false){
						++count;
						first = true;
						continue;
					}
				}
				if(i != j && count%2 == 0)
					ans = max(ans,count);
				else if(i != j && count%2 == 1)
					ans = max(ans,count-1);
				else if(i == j)
					ans = max(ans,count);
				//cout << "ANSWER:" << ans << "\n";
			}
		}
		cout << n - ans << "\n";
	}
}