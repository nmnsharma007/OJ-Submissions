#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s,t;
	cin >> s >> t;
	vector<int> freq1(26),freq2(26);
	int len1 = s.length();
	int len2 = t.length();
	if(len1 < len2){
		cout << "need tree\n";
	}
	else if(len1 == len2){
		for(int i = 0; i < len1;i++){
			freq1[s[i] - 'a']++;
			freq2[t[i] - 'a']++;
		}
		int flag = 1;
		for(int i = 0; i < 26;i++){
			if(freq1[i] != freq2[i]){
				flag = 0;
				break;
			}
		}
		if(flag == 0)
			cout << "need tree\n";
		else
			cout << "array\n";
	}
	else{
		int flag = 1;
		//cout << "reached\n";
		for(int i = 0; i < len1;i++){
			freq1[s[i] - 'a']++;
		}
		for(int i = 0; i < len2;i++){
			freq2[t[i] - 'a']++;
		}
		for(int i = 0; i < 26;i++){
			if(freq1[i] < freq2[i]){
				flag = 0;
				break;
			}
		}
		if(flag == 0)
			cout << "need tree\n";
		else{
			int i = 0;
			int j = 0;
			int flag = 1;
			while(j < len2){
				if(i >= len1){
					flag = 0;
					break;
				}
				if(i < len1 && j < len2 && s[i] == t[j]){
					i++;
					j++;
					continue;
				}
				while(i < len1 && s[i] != t[j]){
					i++;
				}
			}
			if(flag == 0)
				cout << "both\n";
			else
				cout << "automaton\n";
		}
	}
}
