#include<iostream>
#include<vector>
using ll = long long;

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(0);
	int n;
	std::cin >> n;
	std::vector<int> number(n+1);
	int cnt = 0;
	for(int i = 1; i <= n;++i){
		std::cin >> number[i];
		if(number[i] == 1)
			++cnt;
	}
	if(cnt == 1)
		std::cout << "-1\n";
	else{
		std::vector<int> divisors;
		for(int i = 2; i*i <= cnt;++i){
			if(cnt%i == 0){
				divisors.push_back(i);
				divisors.push_back(cnt/i);
			}
		}
		divisors.push_back(cnt);
		ll ans = 1e18;
		for(int index = 0; index < (int)divisors.size();++index){
			int divisor = divisors[index];
			ll temp_ans = 0;
			int median = divisor/2;
			for(int i = 1;i <= n;++i){
				int j = i;
				int num = 0;
				std::vector<int> temp;
				while(j <= n && num < divisor){
					if(number[j] == 1){
						temp.push_back(j);
						++num;
					}
					++j;
				}
				for(int k = 0;k < num;++k){
					temp_ans += abs(temp[k]-temp[median]);
				}
				i = j-1;
			}
			ans = std::min(ans,temp_ans);
		}
		std::cout << ans << "\n";
	}
}
