#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, x, odd(0), even(0);
    cin >> n;
    for(int i=0; i<n; i++) {
    	cin >> x;
  
    	if(x%2 == 0) even++;
    	else odd++;
    }
    
    cout << min(odd, even);
	
	return 0;
}
/**/