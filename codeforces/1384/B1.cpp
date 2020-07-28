#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n,k,l;
        cin >> n >> k >> l;
        int depth[n+2];
        depth[0] = -k;
		depth[n+1] = -k;
        for(int i = 1; i <= n;++i){
            cin >> depth[i];
        }
        set<tuple<int,int,bool> > visited;
        function<bool(int,int,bool)> solve = [&](int pos,int tide,bool down){
            if(pos > n)
                return true;
            if(visited.find({pos,tide,down}) != visited.end())
                return false;
			visited.insert({pos,tide,down});
            tide += down ? -1 : 1;
            if(tide == 0)
                down = false;
            if(tide == k)
                down = true;
            if(depth[pos] + tide <= l && solve(pos,tide,down))
                return true;
            if(depth[pos+1] + tide <= l && solve(pos+1,tide,down))
                return true;
            return false;
        };
        if(solve(0,0,false))
			cout << "YES\n";
		else
			cout << "NO\n";
    }
}