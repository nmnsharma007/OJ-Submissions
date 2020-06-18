#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        int degree = 0;
        for(int i=0;i<n-1;i++){
            int u,v;
            cin >> u >> v;
            if(u == x || v == x)
                degree++;
        }
        if(degree <= 1)
            cout << "Ayush\n";
        else if((n-3)%2 == 0)
            cout << "Ashish\n";
        else
            cout << "Ayush\n";
    }
}