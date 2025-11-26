/*
Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/KITCHENSPICE
 Date: 26/11/25
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
        if (x < 4)
        {
            cout << "MILD" << endl;
        }
        else if (x >= 4 && x < 7)
        {
            cout << "MEDIUM" << endl;
        }
        else
        {
            cout << "HOT" << endl;
        }
    }
    return 0;
}