#include <bits/stdc++.h>
#define fast     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl  '\n'

using namespace std;
int main(){
	fast
	unordered_map <string,ll> map;
	ll n; 
	cin >> n;
	
	
    for(int i = 0; i < n; i++){
    	string s; 
    	cin >> s;
        
    	if(map[s] == 0) cout << "OK" << endl;
    	
    	else cout << s << map[s] << endl;
    	
    	map[s]++;
    }
    
    return 0;
}