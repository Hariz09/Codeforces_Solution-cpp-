#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, m;
	cin >> n >> m;
	int a[m];
	for(int i=0; i<m; i++){
		cin >> a[i]; 
	}
	sort(a, a+m);
	int min = a[n-1]-a[0];
    for(int g=1;g<m-n+1;g++)
    {
        if(min>=(a[g+n-1]-a[g]))
        {
            min = (a[g+n-1]-a[g]);
        }
    }
    cout<<min;
    return 0;
}
 