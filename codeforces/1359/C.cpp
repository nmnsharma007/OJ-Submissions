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
		int h,c,t;
		cin >> h >> c >> t;
		if(h == t){
			cout << "1\n";
			continue;
		}
		if(t <= (h+c)/2){
			cout << "2\n";
			continue;
		}
		int ans;
		int k = (h-t)/(2*t - (h+c));
		int dif1 = (2*k+3) * abs(((k+1)*h + k*c) - (t * (2*k+1)));
		int dif2 = (2*k+1) * abs(((k+2)*h + (k+1)*c) - (t * (2*k+3)));
		if(dif1 <= dif2)
			ans = k;
		else
			ans = k+1;
		cout << 2 * ans + 1<< "\n";
	}
}
