#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
    int t;
    cin >> t;
    while(t--){
    	int a, b, ans(0);
    	cin >> a >> b;
    	if(a == b) cout << 0 << '\n';
    	else if(abs(a-b) <= 10) cout << 1 << '\n';
    	else{
    		if((abs(a-b)%10 == 0)) ans += (abs(a-b))/10;
    		else ans += (abs(a-b))/10 + 1;
    		cout << ans << '\n';
    	}
    	
    }
    return 0;
} 
/*
'+', '-', '*', '<', '>', dan '='.*/
