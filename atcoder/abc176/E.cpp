#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 3e5+1;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int h,w,m;
	cin >> h >> w >> m;
	vector<int> row(N,0),col(N,0);
	map<pair<int,int>,int > mp;
	for(int i = 0; i < m;++i){
		int x,y;
		cin >> x >> y;
		++row[x];
		++col[y];
		++mp[{x,y}];
	}
	int maxx = 0,maxy = 0;
	for(int i = 1; i < N;++i){
		maxx = max(maxx,row[i]);
		maxy = max(maxy,col[i]);
	}
	int ans = maxx + maxy - 1;
	vector<int> r,c;
	for(int i = 1; i < N;++i){
		if(maxx == row[i])
			r.push_back(i);
		if(maxy == col[i])
			c.push_back(i);
	}
	for(int i = 0; i < (int)r.size();++i){
		for(int j = 0; j < (int)c.size();++j){
			if(mp[{r[i],c[j]}] == 0){
				cout << ans+1 << "\n";
				return 0;
			}
		}
	}
	cout << ans << "\n";
}
