#include <bits/stdc++.h>
using namespace std;

void solve(int a, int b){
	if(a%b == 0) cout << "0" << '\n';
	else{
		int ans = b*(a/b+1)-a;
		cout << ans << '\n';
	}
}

int main (){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        int a, b;
        cin >> a >> b;
        solve(a, b);
    }
}