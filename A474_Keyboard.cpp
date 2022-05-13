#include <bits/stdc++.h>
using namespace std;

string key = "qwertyuiopasdfghjkl;zxcvbnm,./";

void solve(char t){
	string s;
	cin >> s;
	for(int i=0; i<s.length(); i++){
		for(int j=0; j<key.length(); j++){
			if(s[i] == key[j]){
				if(t == 'R') cout << key [j-1];
				else if(t == 'L') cout << key[j+1];
				continue;
			} 
		}
	}
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
    char t;
    cin >> t;
    solve(t);
    
    return 0;
} 