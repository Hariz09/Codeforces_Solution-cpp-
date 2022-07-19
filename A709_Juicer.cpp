#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    long long n, b, d, orange, waste(0), juice(0);
    cin >> n >> b >> d;
    
    for(long long i=0; i<n; i++){
    	cin >> orange;
    	
    	if(orange <= b){
    		juice += orange;
    		
    		if(juice > d){
            	waste++;
            	juice = 0;
           }
    	} 
    }

    cout << waste;
	
	return 0;
}
/**/