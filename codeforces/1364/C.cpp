#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> a(n,0),b(n,0),freq(1e5+1,0);
	for(int i = 0; i < n;++i){
		cin >> a[i];
		++freq[a[i]];
	}
	int prev = 0;
	for(int i = 0; i < n;++i){
		if(i > 0 && a[i] > a[i-1]){
			b[i] = a[i-1];
			++freq[b[i]];
			continue;
		}
		while(freq[prev] != 0){
			++prev;
		}
		b[i] = prev;
		++prev;
	}
	for(int i = 0; i < n;++i){
		cout << b[i] << " ";
	}
	cout << "\n";
}
