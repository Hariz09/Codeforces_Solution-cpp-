#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string a;
    cin>>a;
    reverse(s.begin(), s.end());
    if(s==a)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}