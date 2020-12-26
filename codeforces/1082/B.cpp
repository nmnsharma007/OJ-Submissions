#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	string s;
	cin >> s;
	vector<pair<int,int> > v;
	int ans = 0;
	for(int i = 0; i < n;++i){
		if(s[i] == 'S')
			continue;
		int start = i;
		int j = i;
		while(j < n && s[j] == 'G'){
			++j;
		}
		i = j-1;
		int end = j-1;
		ans = max(end-start+1,ans);
		v.push_back({start,end});
	}
	for(int i = 0; i < (int)v.size();++i){
		int lend = v[i].second;
		int len1 = v[i].second - v[i].first + 1;
		if(i < (int)v.size()-1){
			int rstart = v[i+1].first;
			int len2 = v[i+1].second-v[i+1].first+1;
			if(rstart-lend <= 2){
				ans = max(ans,len1+len2);
				if((int)v.size() >= 3)
					ans = max(ans,len1+len2+1);
			}
		}
		if((int)v.size() > 1)
			ans = max(ans,len1+1);
	}
	cout << ans << "\n";
}
