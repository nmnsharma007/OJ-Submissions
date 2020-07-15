#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int> freq(101);
	set<int> s;
	int arr[n];
	for(int i = 0; i < n;i++){
		cin >> arr[i];
		freq[arr[i]]++;
		s.insert(arr[i]);
	}
	if(s.size() != 2)
		cout << "NO\n";
	else{
		set<int> :: iterator it;
		for(it = s.begin();it != s.end();it++){
			if(freq[*it] != n/2){
				cout << "NO\n";
				return 0;
			}
		}
		it = s.begin();
		cout << "YES\n";
		cout << *it << " ";
		it++;
		cout << *it << "\n";
	}
}