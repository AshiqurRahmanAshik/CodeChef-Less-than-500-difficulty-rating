/*
Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/F1RULE
 Date: 01/12/25
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int x, y;
        cin >> x >> y;

        if (100 * y <= 107 * x)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}