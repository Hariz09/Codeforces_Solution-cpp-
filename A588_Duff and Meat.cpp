#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, meat, price, cheapest(0), ans(0);
    
    cin >> n >> meat >> price;
    cheapest = price;
    ans += meat*cheapest;
    
    for(int i=0; i<n-1; i++){
    	cin >> meat >> price;
    	cheapest = min(cheapest, price);
    	ans += meat*cheapest;
    }
	
	cout << ans;
	
	return 0;
}
/*
n days
a meat
p dolar 
*/