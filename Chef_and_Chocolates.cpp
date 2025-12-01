/*
Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CHEFCHOCO
 Date: 01/12/25
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int c, x, y;
        cin >> c >> x >> y;
        cout << (c - x) * y << endl;
    }
    return 0;
}