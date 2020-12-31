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
		int n;
		cin >> n;
		int left = n-1;
		int right = n;
		cout << "2\n";
		while(left >= 1){
			cout << left << " " << right << "\n";
			right = (left+right+1)/2;
			--left;
		}
	}
}
