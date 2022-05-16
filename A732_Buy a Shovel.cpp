#include <bits/stdc++.h>
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int r, k;
	cin >> r >> k;
	int x = r%10;
	int ans(1);
	for(int i=1; i<=10; i++){
		if(x==0||x==k) break;
		x = r*i%10;
		ans = i;
	}
	cout << ans << endl;
 
	return 0;
}