/*
Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CARTRIP
 Date: 24/11/25
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
        if (x <= 300)
        {
            cout << "3000" << endl;
        }
        else
        {
            cout << x * 10 << endl;
        }
    }
    return 0;
}