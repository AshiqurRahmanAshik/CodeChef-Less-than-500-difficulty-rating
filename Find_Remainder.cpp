/*
Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/FLOW002
 Date: 27/11/25
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, a, b;
    cin >> tc;
    while (tc--)
    {
        cin >> a >> b;
        cout << a % b << endl;
    }

    return 0;
}