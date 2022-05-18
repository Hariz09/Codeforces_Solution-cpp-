#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
    vector<int> point;
    int t(3);
    while(t--){
    	int k;
    	cin >> k;
    	point.push_back(k);
    }
    sort(point.begin(), point.end());
    cout << point[2]-point[0];

    return 0;
} 