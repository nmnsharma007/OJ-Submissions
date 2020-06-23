#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string s;
		cin >> s;
		string ans = "";
		int pos = -1;
		for(int i=0;i<n;i++){
			if(s[i] == '1')
				break;
			ans += s[i];
		}
		for(int i=0;i<n;i++){
			if(s[i] == '0')
				pos = i;
		}
		if(pos == -1)
			ans = s;
		else{
			int flag = 0;
			for(int i=0;i<pos;i++){
				if(s[i] == '1')
					flag = 1;
			}
			if(flag == 0)
				ans = s;
			else{
				for(int i=pos;i<n;i++)
					ans += s[i];
			}
		}
		cout << ans << "\n";
	}
}