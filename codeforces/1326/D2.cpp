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
		int len = 0;
		int pos1 = 0,pos2 = s.length()-1;
		while(pos1 <= pos2 && s[pos1] == s[pos2]){
			--pos2;
			++pos1;
			++len;
		}
		if(pos1 < pos2){
			string join1 = "",join2 = "";
			for(int i = 0; i < pos1;++i){
				join1 += s[i];
			}
			for(int i = pos2+1;i < s.length();++i){
				join2 += s[i];
			}
			string str = "";
			for(int i = pos1; i <= pos2;++i){
				str += s[i];
			}
			string temp = str + "#";
		   	string temp_s = str;
			reverse(temp_s.begin(),temp_s.end());
			temp += temp_s;
			int n = temp.length();
			vector<int> pref(n,0);
			for(int i = 1; i < n;++i){
				int j = pref[i-1];
				while(j > 0 && temp[i] != temp[j]){
					j = pref[j-1];
				}
				if(temp[i] == temp[j])
					++j;
				pref[i] = j;
			}
			temp = temp_s + "#" + str;
			vector<int> suf(n,0);
			for(int i = 1; i < n;++i){
				int j = suf[i-1];
				while(j > 0 && temp[i] != temp[j]){
					j = suf[j-1];
				}
				if(temp[i] == temp[j])
					++j;
				suf[i] = j;
			}
			string join = "";
			if(pref[n-1] >= suf[n-1]){
				for(int i = 0; i < pref[n-1];++i){
					join += str[i];
				}
			}
			else{
				for(int i = str.length()-suf[n-1]; i < str.length();++i){
					join += str[i];
				}
			}
			string ans = join1 + join + join2;
			cout << ans << "\n";
		}
		else
			cout << s << "\n";
	}
}
