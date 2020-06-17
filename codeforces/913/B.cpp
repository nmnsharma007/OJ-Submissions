#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int p[n+1];
    vector<int> c(n+1);
    for(int i=2;i<=n;i++){
        cin >> p[i];
        c[p[i]]++;
    }
    int flag = 1;
    for(int i=1;i<=n;i++){
        if(c[i] == 0)
            continue;
        int count = 0;
        for(int j=1;j<=n;j++){
            if(p[j] == i && c[j] == 0)
                count++;
        }
        if(count < 3){
            flag = 0;
            break;
        }
    }
    if(flag == 0)
        puts("No\n");
    else
        puts("Yes\n");
}