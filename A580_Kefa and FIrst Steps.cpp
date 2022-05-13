#include <bits/stdc++.h>
using namespace std;
int n, res , k;
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	 cin >> n;
	 int a[n];
	for(int i = 1;i <= n; ++i){
		cin >> a[i];
		if(a[i] >= a[i - 1])k++;
		else res = max(res , k),k=1;
	}
	res = max(res , k);
	cout << res;
return 0;
    }