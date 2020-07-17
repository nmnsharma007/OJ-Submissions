#include<bits/stdc++.h>
using namespace std;
using ll = long long;
string s;
int n;
int solve(char c,int l,int r)
{
	int n = s.length();
	int mid = (l+r)/2;
	if(r < l)
		return 0;
	if(r == l)
		return (s[l] == c) ? 0 : 1;
	int count1 = 0,count2 = 0;
	for(int i = l; i <= mid;++i){
		if(s[i] != c)
			count1++;
	}
	for(int i = mid+1; i <= r;++i){
		if(s[i] != c)
			count2++;
	}
	return min(count1 + solve(c+1,mid+1,r),count2 + solve(c+1,l,mid));
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		cin >> s;
		int left = 0;
		int right = n-1;
		int ans = solve('a',left,right);
		cout << ans << "\n";
	}
}