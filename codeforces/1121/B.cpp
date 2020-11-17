#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n;++i){
		cin >> a[i];
	}
	sort(a.begin(),a.end());
	int ans = 0;
	for(int sum = 3; sum <= a[n-1]+a[n-2];++sum){
		int left = 0;
		int right = n-1;
		int cnt = 0;
		while(left < right){
			if(a[left]+a[right] > sum)
				--right;
			else if(a[left]+a[right] == sum){
				++left;
				--right;
				++cnt;
			}
			else
				++left;
		}
		ans = max(ans,cnt);
	}
	cout << ans << "\n";
}