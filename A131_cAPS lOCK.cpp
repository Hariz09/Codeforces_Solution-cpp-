#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl  '\n'
using namespace std;

int main(){
	bool flag(true), f(true);
    string s;
    cin >> s;
    
    if(s[0] >= 'a' && s[0] <= 'z') f = false;
    
    for(int i = 1; i < s.size(); i++){
        if(s[i] >= 'a' && s[i] <= 'z') {
            flag = false;
            break;
        }
    }
 
    if(flag){
        if(f) s[0] += 32;
        else s[0] -= 32;
        for (int i = 1; i < s.size(); i++){
        	if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
        }
    }
    
    cout << s;
    
    return 0;
}