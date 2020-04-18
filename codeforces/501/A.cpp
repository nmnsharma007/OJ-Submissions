#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int score = max(3*(a/10),a - (a/250)*c);
    int score1 = max(3*(b/10),b - (b/250)*d);
    if(score > score1)
        cout << "Misha";
    else if(score < score1)
        cout << "Vasya";
    else
    {
        cout << "Tie";
    }
    
}