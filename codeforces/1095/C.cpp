#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll power(ll x,int y){
	if(y == 0)
		return 1;
	ll res = 1;
	while(y){
		if(y%2)
			res = res * x;
		x = (x*x);
		y /= 2;
	}
	return res;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,k;
	cin >> n >> k;
	int num = __builtin_popcount(n);
	if(k > n)
		cout << "NO\n";
	else if(num > k)
		cout << "NO\n";
	else{
		cout << "YES\n";
		int pos = -1;
		int cnt = 0;
		int temp = n;
		vector<int> v;
		while(temp){
			v.push_back(temp%2);
			temp /= 2;
		}
		ll sum = 0;
		for(int i = 0; i < (int)v.size();++i){
			if(v[i] == 0)
				continue;
			if(sum + power(2,i) + num-cnt-1 >= k){
				pos = i;
				break;
			}
			else{
				sum += power(2,i);
				for(int j = 0; j < power(2,i);++j){
					cout << "1 ";
				}
				++cnt;
			}
		}
		priority_queue<int> pq;
		pq.push(pow(2,pos));
		while(pq.size()+num-cnt-1+sum != k){
			int temp = pq.top();
			pq.pop();
			temp /= 2;
			pq.push(temp);
			pq.push(temp);
		}
		while(!pq.empty()){
			cout << pq.top() << " ";
			pq.pop();
		}
		for(int i = pos+1; i < (int)v.size();++i){
			if(v[i] == 1){
				cout << power(2,i) << " ";
			}
		}
		cout << "\n";
	}
}
