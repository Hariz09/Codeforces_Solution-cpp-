#include <bits/stdc++.h>
using namespace std;

void solve(){
	int x,n,m;
	cin >> x >> n >> m;
	
	if(x<=10 && m>=1) cout << "YES" << '\n';
   
    else{
    	for(int i=1; i<=n; i++) x = 10 + x/2;
    	for(int i=0; i<m; i++) x=x-10;
    	
    	if(x>0) cout << "NO" << '\n';
    	else cout << "YES" << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
    int t;
    cin >> t;
    while(t--){
    	solve();
    }
    
    return 0;
} 