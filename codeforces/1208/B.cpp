#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int arr[n+1];
	for(int i = 1; i <= n;++i){
		cin >> arr[i];
	}
	set<int> pref;
	bool exist = true;
	int ans = 0;
	for(int i = 0; i <= n;++i){
		set<int> suf;
		if(i != 0 && exist){
			if(pref.find(arr[i]) != pref.end()){
				exist = false;
			}
			else
				pref.insert(arr[i]);
		}
		for(int j = n; j > i;--j){
			if(pref.find(arr[j]) != pref.end())
				break;
			if(suf.find(arr[j]) != suf.end())
				break;
			suf.insert(arr[j]);
		}
		int s;
		if(suf.empty())
			s = 0;
		else
			s = suf.size();
		int p;
		if(pref.empty())
			p = 0;
		else
			p = pref.size();
		ans = max(p+s,ans);
	}
	cout << n-ans << "\n";
}
