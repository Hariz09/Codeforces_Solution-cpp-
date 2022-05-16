#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
    int n, l(0), dima(0), sereja(0), z(0);;
    cin >> n;
    int arr[n+3], r(n-1);
    for(int i=0; i<n; i++) cin >> arr[i];
   
   
	while(l<=r){
		if(z%2 == 0){
        	if(arr[l] > arr[r]){
        	sereja += arr[l];
        	l++;
    		}
    		else{
    		    sereja+=arr[r];
    		    r--;
    		}
		}
		else{ 
			if(arr[l] > arr[r]){
        		dima += arr[l];
        		l++;
    		}
			else{
				dima += arr[r];
				r--;}
		}

		z++;
	}
	
	cout << sereja << " " << dima;
    return 0;
} 
