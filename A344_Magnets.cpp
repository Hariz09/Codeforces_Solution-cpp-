#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, ans(0);
    cin >> n;
    int m[n];
    for(int i=0; i<n; i++){
    	cin >> m[i];
    }
    for(int i=0; i<n; i++){
    	if(m[i]!=m[i+1]){
    		ans++;
    	}
    }
    cout << ans << endl;
    return 0;
}