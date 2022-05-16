#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	int P[t], ans(0), temp(0);
	for(int i=1; i<=t; i++){
		cin >> P[i];
		if (P[i] >= 1)
            temp += P[i];
        else if(P[i] == -1 && temp > 0)
        {
            temp--;
            
        }
        else if (P[i] == -1)
        {
            ans++;
            
        }
        
    }
    
    cout << ans;
	return 0;
}

/*

*/