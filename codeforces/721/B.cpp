#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    string s[n];
    for(int i=0;i<n;i++){
        cin >> s[i];
    }
    string required;
    cin >> required;
    int len = required.length();
    int count_l = 0;
    int count_e = 0;
    int ans = 0;
    for(int i=0;i<n;i++){
        if((int)s[i].length() < len)
            count_l++;
        else if((int)s[i].length() == len)
            count_e++;
    }
    ans += count_l + 5*(count_l/k);
    int extra = count_l%k;
    int min_count = ans + 1;
    int max_count = ans;
        max_count += count_e;
    if(count_e + extra > k){
        count_e -= (k-extra);
        max_count += 5;
        max_count += ((count_e-1)/k)*5;
    }
    cout << min_count << " " << max_count << "\n";
}