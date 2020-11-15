#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,w;
    cin >> n >> w;
    vector<ll> pref(200001,0);
    for(int i = 0; i < n;++i){
        int start,end;
        ll amount;
        cin >> start >> end >> amount;
        pref[start] += amount;
        pref[end] -= amount;
    }
    int flag = 1;
    for(int i = 0; i <= 200000;++i){
        if(i != 0)
            pref[i] += pref[i-1];
        if(pref[i] > w){
            flag = 0;
            break;
        }
    }
    if(flag)
        cout << "Yes\n";
    else
        cout << "No\n";
}