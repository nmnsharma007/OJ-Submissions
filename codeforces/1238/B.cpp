#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while(q--){
        int n,r;
        cin >> n >> r;
        int num_of_shots[n],arr[n];
        set<int> s;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            s.insert(x);
        }
        set<int> :: iterator it;
        vector<int> v;
        for(it = s.begin();it != s.end();it++){
            int temp = *it;
            int x = (temp+r-1)/r;
            v.push_back(x);
        }
        int ans = 0;
        int i = v.size()-1;
        while(i >= 0 && v[i] > ans){
            ans++;
            i--;
        }
        cout << ans << "\n";
    }   
}