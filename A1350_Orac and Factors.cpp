#include <bits/stdc++.h>
using namespace std;
long long n, k; 
void input (){ 
	cin >> n >> k;
} 
void solve (){
    long long div; 
    for (int i = 2; i <= n; i ++){
        if(n % i == 0) {
            div = i; 
            break; 
        }
    }
    long long ans = n; 
    ans += div; 
    ans += ((k - 1) * 2); 
    cout << ans << '\n'; 
}
int main (){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        input();
        solve(); 
    }
}