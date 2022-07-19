#include <bits/stdc++.h>
using namespace std;

int a, b;

void solve() {
	int ans(0);
	cin >> a >> b;
	
	if(a<b) {
		if((a-b)%2 == 0) ans = 2;
		else ans = 1;
	}
	else if(a>b) {
		if((b-a)%2 == 0) ans = 1;
		else ans = 2;
	}
	
	cout << ans << '\n';
}
int main() {
	ios_base::sync_with_stdio(); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
	
	return 0;
}