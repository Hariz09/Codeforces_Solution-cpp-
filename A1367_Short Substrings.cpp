#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
    int t;
    cin>>t;
    while (t--){
      string s, ans;
      cin >> s;
      ans += s[0];
      
      for (int i=1; i<s.length()-1; i+=2){
          ans += s[i];
      }
      
      ans += s[s.length()-1];
      
      cout << ans << '\n';
    }
return 0;
}