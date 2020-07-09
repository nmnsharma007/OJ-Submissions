#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    vector<pair<string,string> > names;
    for(int i = 0; i < q;i++){
        string old,ne;
        cin >> old >> ne;
        names.push_back({old,ne});
    }
    vector<pair<string,string> > ans;
    set<string> occ;
    for(int i = 0; i < q;i++){
        int flag = 0;
        string ol = names[i].first;
        string ne = names[i].second;
        for(int j = 0; j < i;j++){
            if(names[i].first == names[j].second)
                flag = 1;
        }
        if(flag)
            continue;
        if(occ.find(ne) == occ.end()){
            occ.insert(ol);
            occ.insert(ne);
        }
        else
            continue;
        int j = i+1;
        while(j < q){
            if(ne == names[j].first){
                ne = names[j].second;
            }
            j++;
        }
        ans.push_back({ol,ne});
    }
    cout << ans.size() << "\n";
    for(auto x : ans)
        cout << x.first << " " << x.second << "\n";
}