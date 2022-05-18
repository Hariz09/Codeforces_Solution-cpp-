#include <bits/stdc++.h>
using namespace std;

int maks(int arr[], int n){
	int i, temp = arr[0];
	for(int i=1; i<n; i++){
		if(arr[i] > temp){
			temp = arr[i];
		}
	}
	return temp;
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
    int n;
    cin >> n;
    int pep[n-1], ans(0);
    
    for(int i=0; i<n; i++){
    	cin >> pep[i];
    }
    int max = maks(pep, (sizeof(pep)/sizeof(pep[0])) + 1);
    
    for(int i=0; i<n; i++){
    	ans += max - pep[i];
    }
    
    cout << ans;
    
return 0;
}
