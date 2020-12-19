#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool is_octal(int n){
	while(n > 0){
		int rem = n%8;
		if(rem == 7)
			return false;
		n /= 8;
	}
	return true;
}

bool is_decimal(int n){
	while(n > 0){
		int rem = n%10;
		if(rem == 7)
			return false;
		n /= 10;
	}
	return true;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int ans = 0;
	for(int i = 1; i <= n;++i){
		if(is_decimal(i) && is_octal(i))
			++ans;
	}
	cout << ans << "\n";
}
