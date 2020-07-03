#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int grid[n][n];
        memset(grid,0,sizeof(grid));
        int row = 0,col = 0;
        for(int i = 0; i < k;i++){
            grid[row][col] = 1;
            row++;
            col = (col+1)%n;
            if(row == n){
                row = 0;
                col = (col+1)%n;
            }
        }
        if(k%n == 0)
            cout << "0\n";
        else
            cout << "2\n";
        for(int i = 0;i < n;i++){
            for(int j = 0; j < n;j++)
                cout << grid[i][j];
            cout << "\n";
        }
    }
}