#include <bits/stdc++.h>
using namespace std;

void solve() {
	int one(0), zero(0);
	string s;
	cin >> s;
	for(int i=0; i<= s.length(); i++) {
		if(s[i] == '1') one++;
		else if(s[i] == '0') zero++;
	}
	
    if(min(zero, one)%2) cout << "DA" << '\n';
    else cout << "NET" << '\n';
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}