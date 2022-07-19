#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	
	if(n%2){
		cout << 7;
		n -= 3;
	}
	
	while(n){
		cout << 1;
		n -= 2;
	}
	
	cout << '\n';
}
/*
1 - 2
2 - 5
3 - 5
4 - 4 
5 - 5
6 - 6
7 - 3
8 - 7
9 - 6

pake 1 biar digitnya banyak
kalau ganjil pake 7 didepan
*/

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}