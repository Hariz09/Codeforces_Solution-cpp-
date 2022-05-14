#include <bits/stdc++.h>
using namespace std;

int main (){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int a, cnt(0);
    cin >> a;
    string s;
    cin >> s;
    for(int i=0; i<a; i++) s[i]=towlower(s[i]);
    sort(s.begin(),s.end());
    
    for(int i=0; i<a; i++){
        if(s[i]!=s[i+1]) cnt++;
    }
    
    if(cnt == 26) cout<<"YES";
    else cout<<"NO";
}