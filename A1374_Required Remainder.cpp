#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
    int t;
    cin >> t;
    while(t--){
    	int k, x, y;
    	cin >> k >> x >> y;
    	y -= x;
    	int ans = y/k;
    	ans = ans*k;
    	while(ans > y){
    		ans -= k;
    	}
    	cout << ans+x << '\n';
    }

    return 0;
}
/*
k, x, y
*/