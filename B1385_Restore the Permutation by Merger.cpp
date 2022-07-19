#include <bits/stdc++.h>
using namespace std;

void solve(){
		set<int> s;
		int n, merge; 
		cin >> n;
		merge = n*2; 
		
		while(merge--) {
			int num; 
			cin >> num;
			if(s.count(num)) {
				cout << num << " ";
			}
			s.insert(num);
		}
		cout << '\n';
}
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}

/*
*/