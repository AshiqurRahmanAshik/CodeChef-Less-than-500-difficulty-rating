/*
Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CHAIRS_
 Date: 23/11/25
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
        if (x >= y)
        {

            cout << x - y << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }

    return 0;
}