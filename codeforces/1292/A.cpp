#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    scanf("%d%d", &n,&q);
    int bad_nei = 0;
    set<pair<int,int> > grid;
    for(int i = 0;i < q;i++){
        int row,col;
        scanf("%d%d",&row,&col);
        bool is_forbidden = grid.count({row,col});
        if(is_forbidden)
            grid.erase({row,col});
        else
            grid.insert({row,col});
        for(int r = 1;r <= 2;r++){
            for(int c = col-1;c <= col+1;c++){
                if(r == row)
                    continue;
                if(col < 1 && col > n)
                    continue;
                if(is_forbidden){
                    if(grid.count({r,c}))
                        bad_nei--;
                }
                else{
                    if(grid.count({r,c}))
                        bad_nei++;
                }
            }
        }
        if(bad_nei >= 1)
            puts("NO\n");
        else
            puts("YES\n");
    }
}