#include <bits/stdc++.h>
using namespace std;


int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string s;
	int ans(0), a;
	cin >> a >> s;
	
	for(int i=0; i<s.length(); i++){
		if(s[i] == s[i+1]) ans++;
	}
	cout << ans;
	return 0;
}