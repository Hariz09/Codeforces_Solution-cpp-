#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string s;
    cin >> s;
    int n = s.length();
    if(n==1)
    {
        cout << s;
    }else
    {
    int x = (n+1) / 2;
    while(x--)
    {
        for(int i=0;i<n;i +=2)
        {
            if(s[i] > s[i+2] && i != n-1)
            {
                swap(s[i],s[i+2]);
            }
        }
    }
    cout << s;
    }
    return 0;
}