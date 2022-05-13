#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, t, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i += 1)
    {
        cin >> t;
        sum += t;
    }
    if (sum == 0)
    {
        cout << "EASY" << endl;
    }
    else
    {
        cout << "HARD" << endl;
    }
    return 0;
}