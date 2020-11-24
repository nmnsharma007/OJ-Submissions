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
		int n,k;
		cin >> n >> k;
		string a,b;
		cin >> a >> b;
		vector<int> freqa(26,0),freqb(26,0);
		for(int i = 0 ; i < n;++i){
			++freqa[a[i]-'a'];
			++freqb[b[i]-'a'];
		}
		bool exist = true;
		for(int i = 1; i < 26;++i){
			int extra = freqa[i-1]-freqb[i-1];
			if(extra < 0){
				exist = false;
				break;
			}
			freqa[i] += (extra/k)*k;
		}
		if(freqb[25] != freqa[25])
			exist = false;
		if(exist)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
} 
