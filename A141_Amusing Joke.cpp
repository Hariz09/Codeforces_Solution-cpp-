#include<bits/stdc++.h>
using namespace std;
 
int main (){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string g, h, s;
    int sum(0), res(0), cnt(0), cek(0);
    cin >> g >> h >> s;
    
    for(int i=0; i<g.length(); i++){
       sum += int(g[i]);
       if (g[i] == g[0]) cnt++;
    }
    
    for(int i=0; i<h.length(); i++){
       sum += int(h[i]);
       if(h[i] == g[0]) cnt++;
    }
    
    for(int i=0; i<s.length(); i++){
        res += int(s[i]);
        if (s[i] == g[0]) cek++;
    }
    
    
    if (sum == res && cnt == cek)
        cout << "YES";
    else
        cout << "NO";
 
}