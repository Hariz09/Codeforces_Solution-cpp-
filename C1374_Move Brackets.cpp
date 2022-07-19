#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

void solve(){
	int n;
	int R(0), L(0), ans(0);
	cin >> n;
	
	for(int i=0; i<n; i++){
		char a;
		cin >> a;
		if(a == '(') L++;
		
		else if(L>0){
		R++;
		L--;
		}
		
		else ans++;
		
	}
	
	cout << ans << endl;
	
}

int main(){
	fast
	ll t;
	cin >> t;
	while(t--){
		solve();
	}
	
	return 0;
}