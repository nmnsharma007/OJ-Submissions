#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	queue<int> player1,player2;
	int k1,k2;
	cin >> k1;
	set<pair<queue<int>,queue<int> >> s;
	for(int i=0;i<k1;i++)
	{
		int x;
		cin >> x;
		player1.push(x);
	}
	cin >> k2;
	for(int i=0;i<k2;i++)
	{
		int x;
		cin >> x;
		player2.push(x);
	}
	s.insert(make_pair(player1,player2));
	int flag = 1;
	int count = 0;
	while(!player1.empty() && !player2.empty())
	{
		int card1 = player1.front();
		int card2 = player2.front();
		player1.pop();
		player2.pop();
		if(card1 == card2)
		{
			count++;
			player1.push(card1);
			player2.push(card2);
		}
		else if(card1 > card2)
		{
			count++;
			player1.push(card2);
			player1.push(card1);
		}
		else
		{
			count++;
			player2.push(card1);
			player2.push(card2);
		}
		pair<queue<int>, queue<int> > temp = make_pair(player1,player2);
		if(s.find(temp) != s.end())
		{
			flag = 0;
			break;
		}
		else
			s.insert(temp);
	}
	if(flag == 0)
		puts("-1\n");
	else if(player1.empty())
		cout << count << " " << "2\n";
	else
		cout << count << " " << "1\n";
}