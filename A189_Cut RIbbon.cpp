#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl  '\n'

using namespace std;
int main(){
	fast
	ll n, total(0); 
	cin >> n;
    for(int i=0; i<n; i++){
    	ll a;
    	cin >> a;
    	total += a;
    }
    
    cout << (total%n? (total/n) : (total/n)+1);
    
    return 0;
}