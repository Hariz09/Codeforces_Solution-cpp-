#include <bits/stdc++.h>
using namespace std;


int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	int level[t];
	for(int i=1; i<=t; i++){
		level[i] = 0;
	}
	int p;
	cin >> p;
	for(int i=0; i<p; i++){
		int x;
		cin >> x; 
		level[x] = 1;
	}
	int q;
	cin >> q;
	for(int i=0; i<q; i++){
		int x;
		cin >> x; 
		level[x] = 1;
	}
	
	for(int i=1; i<=t; i++){
		if(level[i] == false){
			cout << "Oh, my keyboard!";
			return 0;
		}
	}
	
	cout << "I become the guy.";
	return 0;
}