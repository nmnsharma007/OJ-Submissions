#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        map<pair<int,int>,int> visited;
        string s;
        cin >> s;
        int l = -1,r = n+1;
        visited[{0,0}] = 0;
        int x = 0;
        int y = 0;
        for(int i=0;i<n;i++){
            if(s[i] == 'L')
                x--;
            else if(s[i] == 'R')
                x++;
            else if(s[i] == 'D')
                y--;
            else
                y++;
            if(visited.find({x,y}) == visited.end())
                visited[{x,y}] = i+1;
            else{
                if(i+1-visited[{x,y}] < r - l + 1){
                    l = visited[{x,y}];
                    r = i;
                }
                visited[{x,y}] = i+1;
            }
        }
        if(l == -1)
            cout << "-1\n";
        else
            cout << l+1 << " " << r+1 << "\n";
    }
}