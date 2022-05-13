#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
    int n, ans(0); cin >> n;
    while(n){
    	if(n>99){
    		ans++;
    		n -= 100;
    	}else if(n>19){
    		ans++;
    		n -= 20;
    	}else if(n>9){
    		ans++;
    		n -= 10;
    	}else if(n>4){
    		ans++;
    		n -= 5;
    	}else{
    		ans++;
    		n--;
    	}
    }
    cout << ans;
    return 0;
} 
