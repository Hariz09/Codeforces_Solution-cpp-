#include <bits/stdc++.h>
using namespace std;


int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string s, s2;
	long long ansS(0), ansS2(0);
	cin >> s >> s2 >> ansS >> ansS2;
	
	for(int i=0; i<s.length(); i++){
		s[i] = tolower(s[i]);
		s2[i] = tolower(s2[i]);
		if(s[i] > s2[i]){
			cout << 1;
			return 0;
		}
		else if(s[i] < s2[i]){
			cout << -1;
			return 0;
		}
	}
	cout << 0;
	return 0;
}