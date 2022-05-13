#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
    string s;
    cin >> s;
    int a(0);
    bool ans(true); 
    for(int i=0; i<s.length(); i++){
    	if(a == 6){
    		ans = false;
    		break;
    	}else if(s[i] == s[i+1]){
    		a++;
    	}else{
    		a = 0;
    	}
    }
    if(ans == false){
    	cout << "YES\n";
    }else{
    	cout << "NO\n";
    }
    return 0;
}