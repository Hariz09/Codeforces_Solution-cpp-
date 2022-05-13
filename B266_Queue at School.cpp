#include<bits/stdc++.h>
using namespace std;
 
int main(){
int n, t;
cin >> n >> t;
string s;
cin >> s;
while(t--){
    for(int j=0;j<n;j++){
        if(s[j]<s[j+1]){
            swap(s[j],s[j+1]);
            
        j++;
        }
        
    }
}
cout<<s;
return 0;
}