#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,k;
	cin >> n >> k;
	vector<int> a(n);
	int mini = 1e9+7,maxi = -1e9-7;
	for(int i = 0; i < n;++i){
		cin >> a[i];
		mini = min(mini,a[i]);
		maxi = max(maxi,a[i]);
	}
	if(k >= 3)
		cout << maxi << "\n";
	else if(k == 1)
		cout << mini << "\n";
	else{
		vector<int> temp(n);
		temp[0] = a[0];
		temp[n-1] = a[n-1];
		for(int i = n-2; i >= 1;--i){
			temp[i] = min(temp[i+1],a[i]);
		}
		maxi = -1e9-7,mini = 1e9+7;;
		for(int i = 0; i < n-1;++i){
			mini = min(mini,temp[i]);
			maxi = max(maxi,max(mini,temp[i+1]));
		}
		cout << maxi << "\n";
	}
}
