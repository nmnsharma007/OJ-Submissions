#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int freq[4000];
	memset(freq,0,sizeof(freq));
	for(int i = 0; i < n;++i){
		int x;
		cin >> x;
		++freq[x];
	}
	for(int i = 1; i < 4000;++i){
		if(freq[i] == 0){
			cout << i << "\n";
			return 0;
		}
	}
}