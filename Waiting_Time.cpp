/*
Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/WAITTIME
 Date:  23/11/25
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
        cout << x * 7 - y << endl;
    }
    return 0;
}