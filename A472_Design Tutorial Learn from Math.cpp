#include <bits/stdc++.h>
using namespace std;

bool cekBukanPrima(int n) {
  bool prima = false;

  for (int i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      prima = true;
      break;
    }
  }

  return prima;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
    int n;
    cin >> n;
    for(int i=4; i<=n/2; i++){
    	if(cekBukanPrima(i) && cekBukanPrima(n-i)){
    		cout << i << " " << n-i;
    		return 0;
    	}
    }

    return 0;
} 