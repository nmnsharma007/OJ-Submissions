#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin >> n >> k;
	string s;
	cin >> s;
	int count = 0;
	int l=0;
	int r=0;
	int ans = 0;
	while(l < n && r < n){//converting a to b
		if(s[r] == 'b'){
			ans = max(ans,r-l+1);
			r++;
			continue;
		}
		count++;
		//cout << "count:" << count << "\n";
		while(count > k){
			count -= (s[l] == 'a');
			l++;
		}
		//cout << "left:" << l << "\n";
		ans = max(ans,r-l+1);
		r++;
	}
	l=0;
	r=0;
	count = 0;
	//cout << "count:" << count << "\n";
	while(l < n && r < n){
		if(s[r] == 'a'){
			ans = max(ans,r-l+1);
			r++;
			continue;
		}
		count++;
		while(count > k){
			count -= (s[l] == 'b');
			l++;
		}
		ans = max(ans,r-l+1);
		r++;
	}
	cout << ans << "\n";
}