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
		int n,l;
		cin >> n >> l;
		vector<int> arr(n+2,0);
		for(int i = 1; i <= n;++i){
			cin >> arr[i];
		}
		arr[n+1] = l;
		vector<double> pref(n+2,0);
		vector<double> suf(n+2,0);
		for(int i = 1; i <= n+1;++i){
			double time = (double)(arr[i]-arr[i-1])/(double)i;
			pref[i] = pref[i-1] + time;
		}
		for(int i = n; i >= 0;--i){
			double time = (double)(arr[i+1]-arr[i])/(double)(n-i+1);
			suf[i] = suf[i+1] + time;
		}
		double left = 0;
		double right = l;
		double ans = 0.0;
		while(right-left > 1e-6){
			double coordinate = (left+right)/2.0;
			int pos = upper_bound(arr.begin(),arr.end(),coordinate) - arr.begin() - 1;
			double time1 = pref[pos] + (double)(coordinate-arr[pos])/(double)(pos+1);
			double time2 = suf[pos+1] + (double)(arr[pos+1]-coordinate)/(double)(n-pos+1);
			if(abs(time2-time1) < 1e-6){
				ans = time1;
				break;
			}
			else if(time2 > time1){
				left = coordinate;
			}
			else{
				right = coordinate;
			}
		}
		cout << fixed;
		cout << setprecision(12);
		cout << ans << "\n";
	}
} 
