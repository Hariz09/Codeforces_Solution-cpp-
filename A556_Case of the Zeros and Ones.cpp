#include <bits/stdc++.h>
using namespace std;

void solve(int t){
	int satu(0), nol(0);
	string s;
	cin >> s;
	for(int i=0; i<s.length(); i++){
		if(s[i] == '1') satu++;
		else nol ++;
	}
	cout << abs(satu-nol);
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
    int t;
    cin >> t;
    solve(t);
    
    return 0;
} 