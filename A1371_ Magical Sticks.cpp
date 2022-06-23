#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t, n;
    cin >> t;
    while (t--){
        cin >> n;
        int ans = n/2;
        if(n%2 == 1) ans++;
 
        cout << ans << '\n';
    }
    
    return 0;
}