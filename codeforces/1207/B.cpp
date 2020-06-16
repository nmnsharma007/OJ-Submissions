#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin >> n >> m;
	int a[n][m],b[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> a[i][j];
			b[i][j] = 0;
		}
	}
	vector<pair<int,int> > v;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<m-1;j++){
		    if(a[i][j] == 1 && a[i+1][j] == 1 && a[i][j+1] == 1 && a[i+1][j+1] == 1){
				b[i][j] = 1;
				b[i+1][j] = 1;
				b[i+1][j+1] = 1;
				b[i][j+1] = 1;
				v.push_back({i+1,j+1});
			}
			else
			    continue;
		}
	}
		int flag = 1;
		for(int i=0;i<n;i++){
		    for(int j=0;j<m;j++){
		        if(a[i][j] != b[i][j]){
		            flag = 0;
		            break;
		        }
		        if(flag == 0)
		            break;
		    }
		}
		if(flag){
		    cout << v.size() << "\n";
		    for(auto x : v){
		        cout << x.first << " " << x.second << "\n";
		    }
		}
		else
		    cout << "-1\n";
}