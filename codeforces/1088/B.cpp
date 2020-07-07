#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    vector<int> v;
    set<int> uni;
    for(int i = 0; i < n;i++){
        int x;
        cin >> x;
        uni.insert(x);
    }
    for(auto x : uni){
        v.push_back(x);
    }
    int index = 0;
    int prev = 0;
    for(int i = 0; i < k;i++){
        cout << v[index] - prev << "\n";
        if(index < (int)v.size()-1){
            prev = v[index];
            index++;
        }
        else{
            prev = v[index];
        }
    }
}