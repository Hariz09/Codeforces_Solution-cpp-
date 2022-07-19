#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		int a, b, c, n;
		bool ans(false);
		cin >> a >> b >> c >> n;
		int maks = max(a,max(b, c));
		int min_n = (maks-a) + (maks-b) + (maks-c);
		if(min_n > n) ans = false;
		
		else if((a+b+c+n)%3 == 0) ans = true;
		
		cout << (ans? "YES" : "NO") << '\n';
	}
	return 0;
}

/*
1 1 3 1
*/