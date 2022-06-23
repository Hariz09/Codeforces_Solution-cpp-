#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
    int t, a, b, M(0), C(0), D(0), ans(999);
    string res[3] = {"Mishka", "Chris", "Friendship is magic!^^"};
    cin >> t;
    
    
    while(t--){
    	cin >> a >> b;
    	if(a>b) M++;
    	else if(a<b) C++;
    	else D++;
    }
    
    if(M == C) ans = D;
    else ans = max(M, C);
    
    if(ans == M) cout << res[0];
    else if(ans == C) cout << res[1];
    else cout << res[2];
    
    
    return 0;
}
/*
dice
*/