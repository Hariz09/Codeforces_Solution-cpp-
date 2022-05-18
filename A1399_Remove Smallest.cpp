#include <bits/stdc++.h>
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int t;
	cin >> t;
	while(t--){
		vector<int> arr;
		bool flag(1);
		int n, k;
		cin >> n;
		for(int i=0; i<n; i++){
			cin >> k;
			arr.push_back(k);
		}
		sort(arr.begin(), arr.end());
		
		for(int i=1; i<n; i++){
			if(arr[i]-arr[i-1] > 1){
				flag = 0;
				break;
			}
		}
		cout << (flag? "YES" : "NO") << '\n';
	}
 
	return 0;
}