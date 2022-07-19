#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

int main(){
	fast
	int a, b, c;
	cin >> a >> b >> c;
	
	int i = a + b*c;
	int j = a*(b+c);
	int k = a*b*c;
	int l = (a+b)*c;
	int m = a+b+c;
	
	cout << max(i, max(j, max(k, max(l, m))));
	
	return 0;
}