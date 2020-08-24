#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int v;
	cin >> v;
	int arr[10];
	for(int i = 1; i <= 9;++i){
		cin >> arr[i];
	}
	int occur = 0;
	int mini = 1e9+7;
	for(int i = 1; i <= 9;++i){
		if(mini > arr[i])
			mini = arr[i];
	}
	occur = v/mini;
	if(occur == 0){
		cout << "-1\n";
		return 0;
	}
	for(int i = 1; i <= occur;++i){
		int digit = 0;
		for(int j = 1; j <= 9;++j){
			int cost = v - arr[j];
			if(cost < 0)
				continue;
			if(i + cost/mini >= occur)
				digit = max(digit,j);
		}
		cout << digit;
		v = v - arr[digit];
	}
	cout << "\n";
	return 0;
}
