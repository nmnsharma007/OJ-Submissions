#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	int n;
	cin >> n;
	int left[n],right[n];
	int ans = 0;
	int L = 0,R = 0,beauty = 0;
	for(int i = 0; i < n;i++){
		cin >> left[i] >> right[i];
		L += left[i];
		R += right[i];
	}
	beauty = abs(L-R);
	for(int i = 0; i < n;i++){
		int l = L - left[i] + right[i];
		int r = R - right[i] + left[i];
		if(abs(l - r) > beauty){
			ans = i+1;
			beauty = abs(l - r);
		}
	}
	cout << ans << "\n";
}