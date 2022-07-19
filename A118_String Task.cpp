#include<bits/stdc++.h>
#define fast ios_base:sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

int main(){
	string s;
	cin >> s;
	
	for(int i=0; i<s.size(); i++){
		char cek = tolower(s[i]);
		if(cek == 'a' || cek == 'o' || cek == 'y' || cek == 'e' || cek == 'u' || cek == 'i') 
			continue;
		else{
			cout << '.' << cek;
		}
	}
	
}