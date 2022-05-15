#include <bits/stdc++.h>
using namespace std;


int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int ans(0), k, n, w;
	cin >> k >> n >> w;
	
	for(int i=1; i<=w; i++){
		ans += k*i;
	}
	cout << (ans-n > 0? ans-n : 0);
	return 0;
}