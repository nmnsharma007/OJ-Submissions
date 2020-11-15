#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin >> n >> k;
    int grid[n][n];
    for(int i = 0; i < n;++i){
        for(int j = 0; j < n;++j){
            cin >> grid[i][j];
        }
    }
    vector<int> path(n);
    int fact = 1;
    for(int i = 0; i < n;++i){
        path[i] = i;
        if(i != 0)
            fact *= i;
    }
    int ans = 0;
    for(int i = 0; i < fact;++i){
        if(i != 0)
            next_permutation(path.begin()+1,path.end());
        int dist = 0;
        int prev_city = 0;
        for(int j = 1; j < n;++j ){
            dist += grid[prev_city][path[j]];
            prev_city = path[j];
        }
        dist += grid[prev_city][0];
        if(dist == k)
            ++ans;
    }
    cout << ans << "\n";
}