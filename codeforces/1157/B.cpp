#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string a;
	cin >> a;
	int f[10];
	for(int i = 1; i <= 9;i++){
		cin >> f[i];
	}
	for(int i = 0; i < n;i++){
		int x = a[i] - '0';
		if(f[x] > x){
			while(i < n && f[x] >= x){
				a[i] = char(f[x] + '0');
				if(i < n-1)
					x = a[i+1] - '0';
				i++;
			}
			break;
		}
	}
	cout << a << "\n";
}