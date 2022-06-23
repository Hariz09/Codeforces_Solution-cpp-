#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long a = pow(2, n), b = 0;
		
		for(int i=1; i<n/2; i++) a += pow(2, i);
				
		for(int i=n-1; i>=n/2; i--) b += pow(2, i);
 
		cout<< a-b << '\n';
	}
	
	return 0;
}
