#include<iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int num_of_steps = 0;
    num_of_steps += (x / 5);
    x %= 5;
    num_of_steps += (x / 4);
    x %= 4;
    num_of_steps += (x / 3);
    x %= 3;
    num_of_steps += (x / 2);
    x %= 2;
    num_of_steps += (x / 1);
    x %= 1;
    cout << num_of_steps;
}
