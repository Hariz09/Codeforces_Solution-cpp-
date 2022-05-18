#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	int arr[n], temp(0);
    	for(int i=1; i<=n; i++){
    		cin >> arr[i];
    	}
    	for(int i=1; i<=n; i++){
    		if(arr[i] != arr[i+1]){
    			if(i == 1){
    				if(arr[i] == arr[i+2]){
    					cout << i+1 << '\n';
    					break;
    				}
    				else{
    					cout << i << '\n';
    					break;
    				}
    			}
    			else{
    				cout << i+1 << '\n';
    				break;
    			}
    			
    		}
    	}
    }
}

/*
t case
n >= 3
arr[i] != arr[]
*/