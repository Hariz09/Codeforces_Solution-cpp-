#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, k(9); 
	cin >> n;
	for(int i = 0; i<n; i++){
		if(i==0) {
			cout << k;
			k--;
		}
		else {
			cout << k;
			k++;
		}
		if(k == 10) k = 0;
	}
	cout << '\n';
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