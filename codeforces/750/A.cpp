#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin >> n >> k;
	int sum = 0;
	int num_of_minutes = 240-k;
	int i=1;
	int ans = 0;
	while(sum < num_of_minutes && i <= n)
	{
		sum += 5*i;
		ans++;
		i++;
	}
	if(sum > num_of_minutes)
		ans--;
	cout << ans << "\n";
}