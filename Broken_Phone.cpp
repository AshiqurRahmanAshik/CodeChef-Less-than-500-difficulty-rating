/*
Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/BROKENPHONE
 Date: 27/11/25
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
            cout << "NEW PHONE" << endl;
        }
        else if (y > x)
        {
            cout << "REPAIR" << endl;
        }
        else
        {
            cout << "ANY" << endl;
        }
    }
    return 0;
}