#include <bits/stdc++.h>
using namespace std;

int tcase(int n, int t, int back){
	if(n>=t){
		back += n/t;
		n = n/t + n%t;
		if(n >= t){
			return tcase(n, t, back);
		}
	}
	return back;
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
    int n, t;
    cin >> n >> t;
    int b(n);
    cout << tcase(n, t, b);
    return 0;
} 