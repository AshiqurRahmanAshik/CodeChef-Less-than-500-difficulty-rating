/*
Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/PROINC
 Date: 26/11/25
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int x, y;
        cin >> x >> y;
        cout << y + (x / 10) << endl;
    }
}