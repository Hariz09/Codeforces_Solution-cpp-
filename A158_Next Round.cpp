#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
    int n, k, ans(0);
    cin >> n >> k;
    int score[n];
    for(int i=0; i<n; i++){
    	cin >> score[i];
    }
    for(int i=0; i<n; i++){
    	if(score[i] > 0){
    		if(score[i] >= score[k-1]){
    			ans++;	
    		} 
    	}
    }
    cout << ans;
    return 0;
} 
