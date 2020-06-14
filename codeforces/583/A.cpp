#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<int,int> > v;
    for(int i=0;i<n*n;i++){
        int x,y;
        cin >> x >> y;
        v.push_back({x,y});
    }
    set<int> row,col;
    vector<int> ans;
    for(int i=0;i<n*n;i++){
        if(row.find(v[i].first) == row.end()&&col.find(v[i].second) ==col.end()){
            ans.push_back(i+1);
            row.insert(v[i].first);
            col.insert(v[i].second);
        }
        else
            continue;
    } 
    for(auto x : ans)
        cout << x << " ";
}