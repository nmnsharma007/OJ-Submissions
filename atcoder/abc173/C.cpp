#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h,w,k;
    cin >> h >> w >> k;
    string grid[h];
    int black = 0;
    for(int i = 0; i < h;i++){
        cin >> grid[i];
        for(int j = 0; j < w;j++){
            if(grid[i][j] == '#')
                black++;
        }
    }
    int ans = 0;
    for(int i = 0; i < (int)pow(2,h);i++){
        for(int j = 0;j < (int)pow(2,w);j++){
            int count = 0;
            vector<int> row,col;
            int temp = i;
            for(int r = 0;r < h;r++){
                if(temp&1){
                    row.push_back(r);
                }
                temp >>= 1;
            }
            temp = j;
            for(int c = 0; c < w;c++){
                if(temp&1){
                    col.push_back(c);
                }
                temp >>= 1;
            }
            for(int r = 0;r < row.size();r++){
                for(int c = 0;c < w;c++){
                    if(grid[row[r]][c] == '#')
                        count++;
                }
            }
            for(int c = 0;c < col.size();c++){
                for(int r = 0;r < h;r++){
                    if(grid[r][col[c]] == '#')
                        count++;
                }
            }
            for(int r = 0; r < (int)row.size();r++){
                for(int c = 0; c < (int)col.size();c++){
                    if(grid[row[r]][col[c]] == '#')
                        count--;
                }
            }
            if(black - count == k)
                ans++;
        }
    }
    cout << ans << "\n";
}