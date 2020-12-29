#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int x[n],y[n],a[n],b[n];
	for(int i = 0; i < n;++i){
		cin >> x[i] >> y[i];
	}
	for(int i = 0; i < n;++i){
		cin >> a[i] >> b[i];
	}
	sort(x,x+n);
	sort(y,y+n);
	sort(a,a+n);
	sort(b,b+n);
	cout << x[0]+a[n-1] << " " << y[0] + b[n-1] << "\n";
}
