#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, cnt(0);
	cin >> n;
	string s, ans;
	cin >> s;
	
	for(int i=0; i<n-1; i++){
		int x(0);
		for(int k=0; k<n-1; k++){
			if(s[k] == s[i] && s[k+1] == s[i+1]) x++;
		}
		
		if (cnt < x){
			cnt = x;
			ans = string(1, s[i]) + string(1, s[i+1]);
		}
	}
	cout << ans << '\n';
    return 0;
}