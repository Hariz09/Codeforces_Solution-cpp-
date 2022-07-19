#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
	int n, ans(0);
	vector<int> v;
	cin >> n;
		
    for(int i=1; n>0; i*=10){
    	int num = n%10*i;
    	
    	if(num != 0) v.push_back(num);
    	
    	n /= 10;
      }
      
      cout << v.size() << '\n';
      
      for(int i=0; i<v.size(); i++) cout << v[i] << " ";
      
      cout << '\n';
}


int main() {
	fast
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	
	return 0;
}