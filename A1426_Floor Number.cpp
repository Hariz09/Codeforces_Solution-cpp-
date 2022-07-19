#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x, ans(1);
    cin >> n >> x;
    n-=2;
    while(n>0) {
        n-=x;
        ans++;
    }
    cout << ans << '\n';
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