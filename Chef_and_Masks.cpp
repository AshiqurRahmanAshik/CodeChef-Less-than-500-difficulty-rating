/*
Problem Link:
 Date:
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, x, y;
    cin >> tc;
    while (tc--)
    {
        cin >> x >> y;
        if (100 * x >= 10 * y)
        {
            cout << "Cloth" << endl;
        }
        else
        {
            cout << "Disposable" << endl;
        }
    }
    return 0;
}