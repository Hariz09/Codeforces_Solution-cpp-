#include <bits/stdc++.h>
using namespace std;

bool solve(int a,int b,int c)
{
	int ans = 2*b;
	if(ans == (a+c)) return true;
	if((a+c)%ans == 0) return true;
	if((a+c) > ans) return false;
	if((ans-c)%a == 0) return true;
	if((ans-a)%c==0) return true;
	
	return false;
}
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
	int t; 
	cin >> t;
	while(t--){
		int a, b, c;
		cin >> a >> b >> c;
		bool ans(solve(a, b, c));
		
		if(ans) cout << "YES" << '\n';
		else cout << "NO" << '\n';
	}
	
	return 0;
}