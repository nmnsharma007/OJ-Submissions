#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> pairs;
typedef pair<pair<int,int>,pair<int,int>> pairofpairs;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        int prevx = 0;
        int prevy = 0;
        int x = 0;
        int y = 0;
        int ans = 0;
        pairs start,end;
        set<pairofpairs> segments;
        for(int i=0;i<n;i++)
        {
            if(s[i] == 'W')
                x--;
            else if(s[i] == 'E')
                x++;
            else if(s[i] == 'N')
                y++;
            else if(s[i] == 'S')
                y--;
            start = make_pair(prevx,prevy);
            end = make_pair(x,y);
            pairofpairs q = make_pair(start,end);
            pairofpairs g = make_pair(end,start);
            if(segments.find(q)!= segments.end()|| segments.find(g)!=segments.end())
                ans++;
            else
            {
                ans += 5;
                segments.insert(q);
            }
            prevx = x;
            prevy = y;
        }
        cout << ans << "\n";
    }
}