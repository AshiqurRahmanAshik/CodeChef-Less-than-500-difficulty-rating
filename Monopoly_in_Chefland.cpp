/*
Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/MONOPOLY
 Date: 12/01/25
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        if (x + y < z)
        {
            cout << "Yes" << endl;
        }
        else if (y + z < x)
        {
            cout << "Yes" << endl;
        }
        else if (x + z < y)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}