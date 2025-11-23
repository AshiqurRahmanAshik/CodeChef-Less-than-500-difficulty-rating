/*
Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/RAINFALL1
 Date: 23/11/25
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
        if (x < 3)
        {
            cout << "LIGHT" << endl;
        }
        else if (x >= 3 && x < 7)
        {
            cout << "MODERATE" << endl;
        }
        else
        {
            cout << "HEAVY" << endl;
        }
    }
    return 0;
}