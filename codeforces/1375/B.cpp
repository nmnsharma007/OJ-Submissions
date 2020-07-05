#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        int flag = 1;
        int grid[n][m];
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++){
                if((i==0&&j==0)||(i==0&&j==m-1)||(i==n-1&&j==0)||i==n-1&&j==m-1){
                    grid[i][j] = 2;
                    continue;
                }
                if(i==0||i==n-1||j==m-1||j==0){
                    grid[i][j] = 3;
                    continue;
                }
                grid[i][j] = 4;
            }
        }
        for(int i = 0; i < n;i++){
            for(int j = 0;j < m;j++){
                int val;
                cin >> val;
                if(grid[i][j] < val){
                    flag = 0;
                }
            }
        }
        if(flag == 0)
            puts("NO");
        else{
            puts("YES");
            for(int i = 0; i < n;i++){
                for(int j = 0; j < m;j++){
                    cout << grid[i][j] << " ";
                }
                cout << "\n";
            }
        }
    }
}
