#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

int main(){
    ll a, b, x, y, sum;
    cin >> a >> b;
    x = (a%b);
    sum = a;
    y = a/b;
    while(y!=0){
        sum += y;
        x += y;
        y = x/b;
        x %= b;
    }
    
    cout << sum;
    
    return 0;
}
		 	  		 	   		      			    	