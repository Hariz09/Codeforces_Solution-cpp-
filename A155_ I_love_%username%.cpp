#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
    int t;
    cin >> t;
    int a[t-1];
    cin >> a[0];
    int maks = a[0], minim = a[0], ans(0);
    for(int i=1; i<t; i++){
    	cin >> a[i];
    	if(max(a[i], maks) > maks){
    		maks = a[i];
    		ans++;
    	} 
    	else if(min(a[i], minim) < minim){
    		minim = a[i];
    		ans++;
    	}
    }
    
    cout << ans;
    return 0;
} 
