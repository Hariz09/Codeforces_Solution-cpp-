#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    long long n;
    cin >> n;
    
    cout << ((!(n%2))? n/2 : ((n+1)/2)*-1);
    
    return 0;
} 
