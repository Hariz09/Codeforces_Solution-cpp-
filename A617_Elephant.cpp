#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m(0);
	cin >> n;
	while(n >= 5){
		n -= 5;
		m++;
	}while(n >= 4){
		n -= 4;
		m++;
	}while(n >= 3){
		n -= 3;
		m++;
	}while(n >= 2){
		n -= 2;
		m++;
	}while(n >= 1){
		n -= 1;
		m++;
	}
	cout << m;
	return 0;
}