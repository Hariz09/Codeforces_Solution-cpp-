#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int y, w;
    cin >> y >> w;
    int ans = max(y, w);
    
    if(ans == 1) cout << "1/1";
    else if(ans == 2) cout << "5/6";
    else if(ans == 3) cout << "2/3";
    else if(ans == 4) cout << "1/2";
    else if(ans == 5) cout << "1/3";
    else cout << "1/6";
    
	return 0;
}
