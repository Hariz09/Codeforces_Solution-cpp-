#include <iostream>
using namespace std;

int main() {
	int n, A(0), D(0);
	cin >> n;
	for(int i=0; i<n; i++){
		char x;
		cin >> x;
		if(x == 'A'){
			A++;
		}else if(x == 'D'){
			D++;
		}
	}
	if(A > D){
		cout <<"Anton\n";
	}else if(A < D){
		cout << "Danik\n";
	}else if (A == D){
		cout << "Friendship\n";
	}
	return 0;
}