/*
Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/SLEEP
 Date: 23/11/25
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, sleep;
    cin >> tc;
    while (tc--)
    {
        cin >> sleep;
        if (sleep >= 7)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}