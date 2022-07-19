#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		int h, m, ans(0);
		cin >> h >> m;
		ans = (23-h)*60 + 60-m;
		cout << ans << '\n';
	}
	return 0;
}

/*
1 1 3 1
*/