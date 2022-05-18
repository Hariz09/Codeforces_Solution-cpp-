#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int x = k*l/ nl;
    int y = c*d;
    int z = p/np;
    int ans = min(min(x, y), z);
    cout << ans/n;
    return 0;
}
/*
n friend
k bottle
l ml
c limes
d cut
p g salt
each need nl ml
each need np g

k*l/ nl = x 
c*d = y
p/np = z

min(x, y, z)/ n
*/
