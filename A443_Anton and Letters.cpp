#include <bits/stdc++.h>
using namespace std;

int main (){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    short a[28]={0},ans(0),i;
    string s;
    getline(cin, s);
    
    for(i=1; s[i]!='\0'; i++){
        if(s[i] >= 'a' && s[i] <= 'z') a[s[i] - 'a']++;
    }
    for(i=0; i<28; i++)
        if(a[i]) ans++;
    
    cout << ans;
}