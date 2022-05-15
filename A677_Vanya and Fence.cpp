#include <bits/stdc++.h>
using namespace std;


int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, h, ans(0);
	cin >> n >> h;
	int P[n];
	
	for(int i=1; i<=n; i++){
		cin >> P[i];
		if(P[i] <= h) ans++;
		else ans += 2;
	}
	
	cout << ans;
	
	return 0;
}