#include <bits/stdc++.h>
using namespace std;

void solve(int a){
	int ans(0), x = a/10;
	
	while(x > 0){
		ans += x*10;
		a = a - (x*10) + x;
		x = a/10;
	}
	cout << ans + a << '\n';
	
}
	

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--){
    	int a;
    	cin >> a;
    	solve(a);
    	
    }
    return 0;
} 
