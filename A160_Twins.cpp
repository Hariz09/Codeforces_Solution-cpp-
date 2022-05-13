#include <bits/stdc++.h>
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n,i,t,sum1=0,sum2=0,arr[101];
    cin>>t;
    for(i=0;i<t;i++)
        cin>>arr[i];
    sort(arr,arr+t);
    int count=0;
    sum1 = accumulate(arr,arr+t,0);
    for(i=t-1; i>-1; i--)
    {
        sum2+=arr[i];
        count++;
        if(sum2 > sum1-sum2)
        {
            cout<<count;
            return 0;
        }
 
    }
    cout<<count;
    return 0;
}