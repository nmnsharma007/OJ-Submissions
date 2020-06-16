#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
using ll = long long;
int main()
{
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		string s;
		cin >> s;
		vector<int> v;
		for(int i=0;i<n;i++){
			if(s[i] == '1')
				v.push_back(i);
		}
		int count = 0;
		int i=0;
		while(i < n){
			/*int left = max(0,i-k);
			int right = min(n-1,i+k);*/
			int flag = 1;
			int low = 0;
			int high = v.size()-1;
			while(low <= high){
				int mid = low + (high-low)/2;
				if(v[mid] >= i-k && v[mid] <= i+k){
					flag = 0;
					break;
				}
				else if(v[mid] < i-k){
					low = mid+1;	
				}
				else
					high = mid-1;
			}
			if(flag == 1){
				count++;
				i+=k+1;
			}
			else
				i++;
		}
		cout << count << "\n";
	}
	return 0;
}