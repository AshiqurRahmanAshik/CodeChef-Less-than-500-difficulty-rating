/*
Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/FLOW004
 Date: 28/11/25
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
        int last = x % 10;
        int first = x;
        while (first >= 10)
        {
            first /= 10;
        }
        cout << first + last << endl;
    }
    return 0;
}