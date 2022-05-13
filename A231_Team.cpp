#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t, Petya, Vasya, Tonya, Accept(0);
    cin >> t;
    while (t--)
    {
        cin >> Petya >> Vasya >> Tonya;
        if (Petya + Vasya + Tonya >= 2){
            Accept ++;
        }
    }
    cout << Accept << endl;
    return 0;
}