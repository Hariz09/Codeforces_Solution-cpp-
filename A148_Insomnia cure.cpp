#include <iostream>
using namespace std;


int main() {
	int k,l,m,n,c(0);
	cin >> k >> l >> m >> n;
	int d; cin >> d;
	for(int i = 1; i<=d; i++){
		if(i%k && i%l && i%m && i%n){
			c++;
		}
	}
	cout << d-c;
	return 0;
}