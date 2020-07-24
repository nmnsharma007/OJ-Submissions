#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int arr[n+1];
		for(int i = 1; i <= n;++i){
			cin >> arr[i];
		}
		string ans[n+1];
		ans[0] = "";
		for(int i = 0; i < 60;++i){
			ans[0] += 'a';
		}
		for(int i = 1; i <= n;++i){
		   int equal = arr[i];
		//    cout << equal << "\n";
			ans[i] = "";
			for(int j = 0; j < equal;++j){
				ans[i] += ans[i-1][j];
			}
		    char c;
		    for(char a = 'a'; a <= 'z';++a){
		        if(ans[i-1][equal] != a){
		            c = a;
		            break;
		        }
		    }
		    for(int k = 0; k < 60;++k)
		        ans[i] += c;
		}
		for(auto x : ans)
			cout << x << "\n";
	}
}