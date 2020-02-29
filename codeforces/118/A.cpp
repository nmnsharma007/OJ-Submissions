#include<bits/stdc++.h>
using namespace std;
int main()
{
    string ques,ans = "";
    cin >> ques;
    int i = 0;
    while(i < ques.length())
    {
        if(ques[i] == 'a' || ques[i] == 'e' || ques[i] == 'i' || ques[i] == 'o' || ques[i] == 'u' || ques[i]  == 'y' || ques[i] == 'A' || ques[i] == 'E' || ques[i] == 'I' || ques[i] == 'O' || ques[i] == 'U' || ques[i] == 'Y')
            i++;
        else if((ques[i] >= 'a' && ques[i] <= 'z') || (ques[i] >= 'A' && ques[i] <= 'Z'))
        {
            ans += '.';
            if(ques[i] >= 'A' && ques[i] <= 'Z')
            {
                ans += (ques[i] + 32);
            }
            else
                ans += ques[i];
            i++;
        }
    }
    cout << ans;
}
