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
	int ans = 0;
	for(int i = 0; i < n;++i){
		int freqA = 0,freqT = 0,freqC = 0,freqG = 0;
		for(int j = i; j < n;++j){
			if(s[j] == 'A')
				++freqA;
			else if(s[j] == 'T')
				++freqT;
			else if(s[j] == 'C')
				++freqC;
			else if(s[j] == 'G')
				++freqG;
			if(freqA == freqT && freqC == freqG)
				++ans;
		}
	}
	cout << ans << "\n";
}
