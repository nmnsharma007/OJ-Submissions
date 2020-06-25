#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int count0 = 0;
		int count1 = 0;
		for(int i=0;i<(int)s.length();i++){
			if(s[i] == '0')
				count0++;
			else
				count1++;
		}
		int temp = min(count1,count0);
		if(temp&1)
			puts("DA\n");
		else
			puts("NET\n");
	}
}