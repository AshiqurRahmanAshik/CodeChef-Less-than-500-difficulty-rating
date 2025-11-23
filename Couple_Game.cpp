/*
Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/COUGAME
 Date:  23/11/25
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, g, b;
    cin >> tc;
    while (tc--)
    {
        cin >> g >> b;
        cout << b - g << endl;
    }
    return 0;
}