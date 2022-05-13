#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++){
		if(s[i]=='W'&& s[i+1]=='U'&& s[i+2]=='B'){
			i+=2;
			cout<<" ";
		}
		else{
			cout<<s[i];
		}
	}
}