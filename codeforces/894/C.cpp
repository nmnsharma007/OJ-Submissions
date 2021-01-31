#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int m;
	cin >> m;
	int arr[m];
	for(int i = 0; i < m;++i){
		cin >> arr[i];
	}
	bool flag = true;
	for(int i = 1; i < m;++i){
		if(arr[i]%arr[0]){
			flag = false;
			break;
		}
	}
	if(!flag)
		cout << "-1\n";
	else{
		cout << 2*m << "\n";
		for(int i = 0; i < m;++i){
			cout << arr[i] << " " << arr[0] << " ";
		}
		cout << "\n";
	}
}
