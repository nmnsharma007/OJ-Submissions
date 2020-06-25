#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        mp[x]++;
    }
    int count = 0;
    int ans = 0;
    for(auto p : mp){
        count += (p.second)%2;
        ans += p.second/2 * 2;
    }
    ans += (count+1)/2;
    cout << ans << "\n";
}