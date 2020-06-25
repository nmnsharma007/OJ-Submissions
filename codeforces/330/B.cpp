#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    set<int> s;
    for(int i=0;i<m;i++){
        int u,v;
        cin >> u >> v;
        s.insert(u);
        s.insert(v);
    }
    int node = -1;
    for(int i=1;i<=n;i++){
        if(s.find(i) == s.end()){
            node = i;
            break;
        }
    }
    cout << n-1 << "\n";
    for(int i=1;i<=n;i++){
        if(node != i)
            cout << node << " " << i << "\n";
    }
}