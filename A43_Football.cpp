#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

int main(){
	fast
	unordered_map <string, ll> m;
	int n, ans(0);
	string res;
	cin >> n;
	
	
	for(int i=0; i<n; i++){
		string s;
		cin >> s;
		m[s]++;
		int temp = m[s];
		
		ans = max(ans, temp);
		
		if(m[s] >= ans) res = s;
	}
	
	cout << res;
	
	return 0;
}