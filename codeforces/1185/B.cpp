#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for(int k = 0;k < n;k++){
		string s,t;
		cin >> s >> t;
		int i = 0;
		int j = 0;
		int flag = 1;
		int count1 = 1,count2 = 1;
		while(i < (int)s.length()){
			if(s[i] == t[j]){
				while(s[i] == s[i+1]){
					i++;
					count1++;
				}
				while(t[j] == t[j+1]){
					j++;
					count2++;
				}
				if(count2 >= count1){
					i++;
					j++;
					count1 = 1;
					count2 = 1;
				}
				else{
					flag = 0;
					break;
				}
			}
			else{
				flag = 0;
				break;
			}
		}
		if(j != (int)t.length())
			flag = 0;
		if(flag)
			puts("YES");
		else
			puts("NO");
	}
}
