#include<bits/stdc++.h>
#define fast ios_base:sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

int main(){
	ll width, height, n, m, a;
	cin >> n >> m >> a;        
	
	width = n / a;             
	if (n % a) width++;
	
	height = m / a;              
	if (m % a) height++;
	
	
	cout << width * height << endl;
}