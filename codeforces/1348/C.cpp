#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		string s;
		cin >> s;
		string ans = "";
		sort(s.begin(),s.end());
		if(s[0] != s[k-1]){
			cout << s[k-1] << "\n";
		}
		else{
			if(s[k] == s[n-1]){
				ans += s[0];
				for(int i=1;i<=(n-k)/k;i++)
					ans += s[k];
				int rem = (n-k)%k;
				if(rem)
					ans += s[k];
				cout << ans << "\n";
			}
			else{
				ans += s[0];
				for(int i=k;i<n;i++)
					ans += s[i];
				cout << ans << "\n";
			}
		}
	}
}