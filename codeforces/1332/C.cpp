#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        int mid = k/2;
        int ans = 0;
        for(int i=0;i<=mid-1;i++){
            int start = i;
            int end = k-i-1;
            vector<int> freq(26);
            int temp = n/k;
            while(temp--){
                freq[s[start]-'a']++;
                freq[s[end]-'a']++;
                start += k;
                end += k;
            }
            sort(freq.begin(),freq.end());
            ans += 2*(n/k)- freq[25];
        }
        if(k&1){
                int index = (k+1)/2 - 1;
                int temp = n/k;
                vector<int> freq(26);
                while(temp--){
                    freq[s[index]-'a']++;
                    index += k;
                }
                sort(freq.begin(),freq.end());
                ans += n/k - freq[25];
            }
        cout << ans << "\n";
    }
}