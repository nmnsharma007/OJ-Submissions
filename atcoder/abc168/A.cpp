#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int rem = n%10;
    if(rem == 2 || rem == 4 || rem == 5 || rem == 7 || rem == 9)
        cout << "hon";
    else if(rem == 0 || rem == 1 || rem == 6 || rem == 8)
        cout << "pon";
    else
        cout << "bon";
}