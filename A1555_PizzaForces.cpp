#include <bits/stdc++.h>
using namespace std; 
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		
		if(n<6) n=6;
		if(n>6 && n<8) n=8;
		if(n>8 && n<10) n=10;
		if(n%2 != 0) n+=1;
		
		long long s(0);
		s = n*2.5;
		cout << s << '\n';
	 }
	 
	 return 0;
}