#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int h[n+1];
    for(int i=1;i<=n;i++)
        cin >> h[i];
    h[0] = 0;
    int energy = 0;
    int cost = 0;
    int energy_required;
    for(int i=1;i<=n;i++)
    {
        energy_required = h[i-1] - h[i];
        if(energy_required < 0)
        {
            if(energy >= abs(energy_required))
                energy -= abs(energy_required);
            else
            {
                cost += (abs(energy_required) - energy);
                energy = 0;
            } 
        }
        else
            energy += abs(energy_required); 
    }
    cout << cost;
}