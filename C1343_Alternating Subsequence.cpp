#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
long long arr[5000001], t;
cin>>t;
while(t--)
 {
    long long n,ans(0);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++)
    {
        if(arr[i]>0)
        {
            long long maks=-1;
            while(arr[i]>0 && i<=n)
            {
                maks = max(arr[i], maks);
                i++;
            }
            ans += maks;
            i--;
        }
        else{
        	long long maks = -999999999999;
        	while(arr[i]<0 && i<=n){
           	maks = max(arr[i], maks);
           	i++;
           }
           ans += maks;
           i--;
        }
    }
    cout<<ans<<'\n';
 }
 return 0;
}