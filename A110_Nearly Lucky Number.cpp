#include<bits/stdc++.h>
using namespace std;
 
int main(){
	long long s,n(0), cek(0);
	cin >> s;
	
	while(s != 0){
		cek = s%10;
		if(cek == 4 || cek == 7){
			n++;	
		}
		s = s/10;
	}if(n == 4 || n == 7){
		cout << "YES";
	}else{
		cout << "NO";
	}
	
return 0;
}