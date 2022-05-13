#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
    int n, water[12], i(11), ans(0), sum(0);
    bool b(1);
    cin >> n;
    
    for(int i=0;i<12;i++) cin >> water[i];
	sort(water, water + 12);
	
	
	while(sum < n)
	{
		if(i == -1)
		{
			b = 0;
			break;
		}
		sum += water[i];
		ans++;
		i--;		
	}
	
	if(b) cout << ans;
	else cout << -1;
} 