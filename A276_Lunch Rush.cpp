#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, k, f, t, ans;
    cin >> n >> k >> f >> t;
    
    if(t<k) ans = f;
    else ans = f - (t-k);
    
    for(int i=0; i<n-1; i++){
    	cin >> f >> t;
    	if(t < k){
    		ans = max(ans, f);
    	}
    	else{
    		ans = max(ans, (f - (t-k)));
    	}
    }
	
	cout << ans;
	
	
	return 0;
}
/*
n k
f t

if k > t
joy = f

else if k < t
joy = f - t - k



*/