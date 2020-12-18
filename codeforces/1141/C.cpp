#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int dx[] = {1,-1,0,0};
int dy[] = {0,0,-1,1};

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> q(n,0);
	int maxi = 0,mini = 0;
	for(int i = 1; i < n;++i){
		cin >> q[i];
		q[i] += q[i-1];
		mini = min(mini,q[i]);
		maxi = max(maxi,q[i]);
	}
	if(maxi-mini == n-1 && maxi <= n-1 && mini >= -n+1){
		vector<int> p(n+1),freq(n+1,0);
		p[1] = n-maxi;
		++freq[p[1]];
		for(int i = 2; i <= n;++i){
			p[i] = p[1] + q[i-1];
			++freq[p[i]];
		}
		bool exist = true;
		for(int i = 1; i <= n;++i){
			if(freq[i] != 1){
				exist = false;
				break;
			}
		}
		if(exist){
			for(int i = 1; i <= n;++i){
				cout << p[i] << " ";
			}
			cout << "\n";
		}
		else
			cout << "-1\n";
	}
	else
		cout << "-1\n";
}