#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
	long long n;
	cin >> n;
	cout << n/2 << '\n';
	
	if(n%2 == 1){
		for(int i=2; i<=n/2; i++){
			cout << "2 ";
		}
		cout << "3\n";
	}
	else{
		for(int i=2; i<=n/2; i++){
			cout << "2 ";
		}
		cout << "2\n";
	}
	
	return 0;
}