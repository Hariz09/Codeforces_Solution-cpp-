#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
    int t; cin >> t;
    while(t--){
    	bool flag(true);
    	long long n; cin >> n;
    	for(long long i = 1; i<=n; i*=2){
    		if(i == n){
    			flag = 0;
    		}
    	}
    	if(flag){
    		cout << "YES\n";
    	}else{
    		cout << "NO\n";
    	}
    	
    }
    return 0;
} 
