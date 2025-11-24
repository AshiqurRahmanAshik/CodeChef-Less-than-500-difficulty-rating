/*
Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/INTRDSGN
 Date: 24/11/25
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, x1, y1, x2, y2;
    cin >> tc;
    while (tc--)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        (x1 + y1 >= x2 + y2) ? cout << x2 + y2 << endl : cout << x1 + y1 << endl;
    }

    return 0;
}