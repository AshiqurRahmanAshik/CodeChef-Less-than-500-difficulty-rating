/*
Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/ONEMORE
 Date:  23/11/25
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, min;
    cin >> tc;
    while (tc--)
    {
        cin >> min;
        if (min > 24)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}