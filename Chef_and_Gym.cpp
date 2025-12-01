/*
Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CGYM
 Date:01/12/25
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
        if (x + y <= z)
        {
            cout << 2 << endl;
        }
        else if (x <= z)
        {
            cout << 1 << endl;
        }
        else
            cout << 0 << endl;
    }
    return 0;
}