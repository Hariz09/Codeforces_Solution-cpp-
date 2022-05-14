#include <bits/stdc++.h>
using namespace std;

int cek(int n){
    while(n>10){
         n /= 10;
    }
    return n%10;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
    int cnt(0), n;
    cin >> n;
    
    if(cek(n) == 4){
    	cout << "NO";
        return 0;
    }
    while(n!=0){
        if(n%10 == 1){
        	n = n/10;
        	cnt = 0;
        	continue;
        }
        else if(n%10 == 4){
        	cnt++;
        	if(cnt == 3){
        		cout << "NO";
        		return 0;
        	}
        	else{
        		n = n/10;
        		continue;
        	}
        }
        else{
        	cout << "NO";
        	return 0;
        }
        
    }
    cout << "YES";
}