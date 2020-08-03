#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	int n;
	cin >> n;
	int ans = 0;
	for(int i = 2; i < n;++i){
		ans += i * (i+1);
	}
	cout << ans << "\n";
}