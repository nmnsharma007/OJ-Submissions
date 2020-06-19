#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int k;
    cin >> k;
    vector<long long int> v(10,1);
    long long prod = 1;
    while(prod<k){
        for(int i=0;i<10;i++){
            prod /= v[i];
            v[i]++;
            prod *= v[i];
            if(prod >= k)
                break;
        }
    }
    vector<char> temp = {'c','o','d','e','f','o','r','c','e','s'};
    for(int i=0;i<10;i++){
        char c = temp[i];
        for(int j=0;j<v[i];j++)
            cout << c;
    }
}