#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, a, b;
    cin >> n;
    
    if(n>0) cout << n;
    else {
        a = n/10; //angka terakhir
        b = (n/100)*10+n%10; //angka terakhir ke 2
            cout << max(a, b);
    }
	
	return 0;
}
/**/