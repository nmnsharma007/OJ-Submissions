#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		int c,sum;
		cin >> c >> sum;
		int ans = 0;
		int div = sum/c;
		int rem = sum%c;
		//cout << "rem:" << rem << "\n";
		for(int j=0;j<c;j++){
			int temp = div;
			if(rem > 0){
				rem--;
				temp++;
			}
			//cout << "rem::" << rem << "\n";
			ans = ans + temp*temp;
		}
		cout << ans << "\n";
	}
}