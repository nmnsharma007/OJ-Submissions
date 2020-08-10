#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5+1;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int freq[N];
	memset(freq,0,sizeof(freq));
	for(int i = 0; i < n;++i){
		int x;
		cin >> x;
		++freq[x];
	}
	int sum1 = 0;
	int sum2 = 0;
	for(int i = 1; i < N;++i){
		sum1 += freq[i]/4;
		sum2 += freq[i]/2;
	}
//	cout << freq[1] << " " << freq[2] << "\n";
	int q;
	cin >> q;
	while(q--){
		char c;
		int x;
		cin >> c >> x;
		sum1 -= freq[x]/4;
		sum2 -= freq[x]/2;
		if(c == '+')
			++freq[x];
		else
			--freq[x];
		sum1 += freq[x]/4;
		sum2 += freq[x]/2;
		if(sum1 >= 1 && sum2-2 >= 2)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
