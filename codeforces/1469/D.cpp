#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<pair<int,int> > v;
        for(int i = 9; i <= n-1;++i){
            v.push_back({i,n});
        }
        for(int i = 3; i <= min(n-1,7);++i){
            v.push_back({i,n});
        }
        if(n > 8){
            int temp = n;
            while(temp != 1){
                v.push_back({n,8});
                temp = (temp+7)/8;
            }
            v.push_back({8,2});
            v.push_back({8,2});
            v.push_back({8,2});
        }
        else{
            int temp = n;
            while(temp != 1){
                v.push_back({n,2});
                temp = (temp+1)/2;
            }
        }
        cout << (int)v.size() << "\n";
        for(auto x : v){
            cout << x.first << " " << x.second << "\n";
        }
    }
}   