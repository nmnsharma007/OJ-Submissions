#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin >> n >> m;
	int a[n],b[m];
	for(int i = 0; i < n;++i){
		cin >> a[i];
	}
	for(int i = 0; i < m;++i){
		cin >> b[i];
	}
	sort(a,a+n);
	sort(b,b+m);
	int ans = -1;
	for(int i = a[n-1]; i < b[0];++i){
		if(i >= 2*a[0]){
			ans= i;
			break;
		}
	}
	cout << ans << "\n";
}