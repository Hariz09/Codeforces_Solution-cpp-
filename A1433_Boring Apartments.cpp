#include <bits/stdc++.h>
using namespace std;
int tambahSampai(int n){
	return n*(n+1)/2;
}
int hitungDigit(int n){
	if(n<10){
		return 1;
	}
	else {
		return hitungDigit(n/10)+1;
	}
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
	int t;
	cin>>t;
	while(t--){
		int ans(0), n;
		cin>>n;
		cout<< ((n%10)-1)*10 + tambahSampai(hitungDigit(n));
		cout << '\n';
	}
    return 0;
} 