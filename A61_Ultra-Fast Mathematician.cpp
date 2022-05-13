#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string a,b;
    cin >> a >> b;
    string cek[a.length()];
    
    for(int i=0; i<a.length(); i++){
    	if(a[i] == b[i]){
    		cek[i] ="0";
    	}else{
    		cek[i] ="1";
    	}
    }for (int i=0;i<a.length();i++){
    	cout<<cek[i];
    }
    return 0;
}