#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	double t, x, cnt(0);
	cin >> t;
	
	for(int i=0; i<t; i++){
		cin >> x;
		cnt += x;
	}
	double ans = cnt/t;
	
	cout << fixed << setprecision(12) << ans;
	
	return 0;	
}
