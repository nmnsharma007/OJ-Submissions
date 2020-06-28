#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int temp = n;
        int po2 = 0,po3 = 0;
        while(temp % 2 == 0){
            temp /= 2;
            po2++;
        }
        while(temp % 3 == 0){
            temp /=3;
            po3++;
        }
        if(temp > 1){
            cout << "-1\n";
        }
        else{
            if(po2 == po3)
                cout << po3 << "\n";
            else if(po2 > po3){
                cout << "-1\n";
            }
            else
                cout << po3 + po3-po2 << "\n";
        }
    }
}