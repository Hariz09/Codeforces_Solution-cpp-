#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    int a[n], x;
    
    for(int i=0 ; i<n; i++){
        cin>>x;
        a[x-1]=i+1;
    }
    for(int i=0; i<n;i++) cout<<a[i]<<" ";
      
    
    return 0;
} 
