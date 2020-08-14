#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	ll arr[n+2];
	for(int i = 1; i <= n;++i){
		cin >> arr[i];
	}
	arr[0] = arr[n+1] = 1e7;
	ll left[n+2],right[n+2];
	stack<ll> st;
	st.push(0);
	for(ll i = 1; i <= n;++i){
		while(arr[st.top()] <= arr[i]){
			st.pop();
		}
		left[i] = st.top();
		st.push(i);
	}
	while(!st.empty()){
		st.pop();
	}
	st.push(n+1);
	for(ll i = n; i > 0;--i){
		while(arr[st.top()] < arr[i]){
			st.pop();
		}
		right[i] = st.top();
		st.push(i);
	}
	vector<ll> contribution(n+1,0);
	for(ll i = 1; i <= n;++i){
		contribution[i] = (i - left[i]) * (right[i] - i) * arr[i]; 
	}
	while(!st.empty()){
		st.pop();
	}
	st.push(0);
	arr[0] = arr[n+1] = 0;
	for(ll i = 1; i <= n;++i){
		while(arr[st.top()] >= arr[i]){
			st.pop();
		}
		left[i] = st.top();
		st.push(i);
	}
	while(!st.empty()){
		st.pop();
	}
	st.push(n+1);
	for(ll i = n; i > 0;--i){
		while(arr[st.top()] > arr[i]){
			st.pop();
		}
		right[i] = st.top();
		st.push(i);
	}
	for(int i = 1; i <= n;++i){
		contribution[i] -= ((i - left[i]) * (right[i] - i)* arr[i]);
	}
	ll ans = 0;
	for(int i = 1; i <= n;++i){ 
		ans += contribution[i];
	}
	cout << ans << "\n";
}
