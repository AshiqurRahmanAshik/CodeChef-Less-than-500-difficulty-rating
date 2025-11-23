/*
Problem Link:
 Date:
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, temperature;
    cin >> tc;
    while (tc--)
    {
        cin >> temperature;
        if (temperature > 98)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}