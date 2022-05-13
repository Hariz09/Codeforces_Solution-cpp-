#include <iostream>
using namespace std;

int main() {
	string s;
	char c;
	int lower(0),upper(0);
	cin >> s;
	for(int i; i < s.size(); i++){
		if( s[i] >= 'a'){
			lower++;
		}else{
			upper++;
		}
	}if(upper > lower){
		for(int i; i < s.size(); i++){
			c = toupper(s[i]);
			cout << c;
		}
	}else{
		for(int i; i < s.size(); i++){
			c = tolower(s[i]);
			cout << c;
		}
	}
	
	return 0;
}