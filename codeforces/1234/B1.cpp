#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin >> n >> k;
	vector<int> id(n);
	for(int i=0;i<n;i++)
		cin >> id[i];
	vector<int> ans;
	for(int i=0;i<n;i++){
		if(find(ans.begin(),ans.end(),id[i]) != ans.end())
			continue;
		if(ans.size() >= k){
			ans.insert(ans.begin(),id[i]);
			ans.pop_back();
		}
		else
			ans.insert(ans.begin(),id[i]);
	}
	cout << ans.size() << "\n";
	for(int i=0;i<ans.size();i++)
		cout << ans[i] << " ";
}