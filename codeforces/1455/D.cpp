#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int get_first(vector<int> &a,int x){
	for(int i = 0; i < (int)a.size();++i){
		if(a[i] > x)
			return i;
	}
	return -1;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n,x;
		cin >> n >> x;
		vector<int> a(n);
		for(int i = 0; i < n;++i){
			cin >> a[i];
		}
		int ans = 0;
		while(!is_sorted(a.begin(),a.end())){
			int index = get_first(a,x);
			if(index < 0)
				break;
			swap(a[index],x);
			++ans;
		}
		cout << (is_sorted(a.begin(),a.end()) ? ans : -1) << "\n";
	}
}
