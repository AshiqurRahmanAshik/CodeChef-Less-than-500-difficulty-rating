/*
Problem Link:https://github.com/AshiqurRahmanAshik/CodeChef-Less-than-500-difficulty-rating
 Date: 26/11/25
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, x;
    cin >> tc;
    while (tc--)
    {
        cin >> x;
        if (x > 20)
        {
            cout << "HOT" << endl;
        }
        else
        {
            cout << "COLD" << endl;
        }
    }
    return 0;
}