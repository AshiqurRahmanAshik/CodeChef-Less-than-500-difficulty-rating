/*
Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/BUDGET_
 Date: 28/11/25
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
        if (30 * y <= x)
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