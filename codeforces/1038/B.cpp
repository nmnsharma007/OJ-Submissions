#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin  >> n;
	if(n <= 2)
		cout << "No\n";
	else if(n%2 == 0){
		cout << "Yes\n";
		vector<int> even,odd;
		for(int i = 1; i <= n;i++){
			if(i&1)
				odd.push_back(i);
			else
				even.push_back(i);
		}
		cout << (int)odd.size() << " ";
		for(int i = 0; i < (int)odd.size();i++){
			cout << odd[i] << " ";
		}
		cout << "\n";
		cout << (int)even.size() << " ";
		for(int i = 0;i  < (int)even.size();i++){
			cout << even[i] << " ";
		}
		cout << "\n";
	}
	else{
		vector<int> odd,even;
		cout << "Yes\n";
		for(int i = 1; i <= n;i++){
			if(i&1)
				odd.push_back(i);
			else
				even.push_back(i);
		}
		cout << (int)odd.size() << " ";
		for(auto x : odd)
			cout << x << " ";
		cout << "\n";
		cout << (int)even.size() << " ";
		for(auto x : even)
			cout << x << " ";
		cout << "\n";
	}
}