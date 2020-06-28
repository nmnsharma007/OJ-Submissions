#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    for(int i=1;;i++){
        int temp = a;
        temp += i;
        if(temp < 0)
            temp *= -1;
            while(temp){
            int rem = temp%10;
            if(rem == 8){
                cout << i << "\n";
                return 0;
            }
            temp /= 10;
            }   
    }
}