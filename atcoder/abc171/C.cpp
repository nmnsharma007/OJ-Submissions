#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ll n;
	cin >> n;
	char arr[26];
	for(int i=0;i<26;i++)
		arr[i] = i+'a';
	vector<char> ans;
	while(n--){
		ll rem = n%26;
		ans.push_back(arr[rem]);
		n /= 26;
	}
	for(int i=ans.size()-1;i>=0;i--)
		cout << ans[i];
}