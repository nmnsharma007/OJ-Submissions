#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int a[n],b[n];
	for(int i = 0; i < n;++i){
		cin >> a[i];
	}
	for(int i = 0; i < n;++i){
		cin >> b[i];
	}
	int ans = 0;
	for(int i = 0; i < n;++i){
		ans = ans + a[i]*b[i];
	}
	cout << (ans == 0 ? "Yes" : "No") << "\n";
}
