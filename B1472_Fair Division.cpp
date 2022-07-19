#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
    cin >> t;
    while(t--){
    	int m, even(0), odd(0);
        cin >> m;
        int arr[m];
        
        for(int i=0; i<m; i++){
            cin >> arr[i];
            
            if(arr[i]%2) odd++;
            else even++;
        }
        
        
        if(odd%2 == 0){
            if(odd==0 && even%2!=0) cout << "NO" << '\n';
            else cout << "YES" << '\n';
        }
        
        else cout << "NO" << '\n';
    }
    
    
    return 0;
}