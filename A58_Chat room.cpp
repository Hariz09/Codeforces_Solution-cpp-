#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

int main(){
	fast
	string s;
	cin >> s;
	
	char hello[5] = {'h', 'e', 'l', 'l', 'o'};
	
	int ans(0);
	for(int i = 0; i < s.size(); i++){
		if(s[i] == hello[ans]) ans++;
	}
	
	cout << (ans == 5? "YES" : "NO");
}