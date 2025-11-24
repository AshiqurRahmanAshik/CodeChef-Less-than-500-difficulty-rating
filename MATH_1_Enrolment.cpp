/*
Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/M1ENROL
 Date: 24/11/25
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
        if (x > y)
        {
            cout << "0" << endl;
        }
        else
        {

            cout << y - x << endl;
        }
    }
    return 0;
}