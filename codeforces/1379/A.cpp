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
		string s;
		cin >> s;
		string req = "abacaba";
		int exist = 0;
		int pos = 0;
		while((pos = s.find(req,pos)) != string::npos){
				pos++;
				exist++;
		}
		if(exist == 1){
			for(int i = 0; i < n;i++){
				if(s[i] == '?')
					s[i] = 'd';
			}
			cout << "Yes\n";
			cout << s << "\n";
			continue;
		}
		else if(exist > 1){
			cout << "No\n";
			continue;
		}
		if(exist == 0){
			bool status = false;
			for(int i = 0; i < n;i++){
				string temp = "";
				string b = s;
				for(int j = i; j <= i+6 && j < n;j++){
					temp += b[j];
				}
				//cout << "temp:" << temp << "\n";
				int flag = 1;
				for(int index = 0; index < 7;index++){
					if(req[index] == temp[index])
						continue;
					if(temp[index] == '?'){
						continue;
					}
					flag = 0;
					break;
				}
				if(flag == 1){
				    //cout << "reached\n";
					for(int k = i; k < i+7;k++){
						b[k] = req[k-i];
					}
					int pos = 0;
					int count = 0;
					while((pos = b.find(req,pos)) != string::npos){
						count++;
						pos++;
					}
					if(count == 1)
						status = true;
					if(status){
						for(int len = 0; len < n;len++){
							if(b[len] == '?')
								b[len] = 'd';
						}
						s = b;
						break;
					}
				}
			}
	    	if(status == true){
	         	cout << "Yes\n";
	         	cout << s << "\n";
	    	}
	    	else
	    		cout << "No\n";
	    }
    }
}