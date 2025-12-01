/*
Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/MANGOES
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
        int x, y, z;
        cin >> x >> y >> z;
        cout << (z - y) / x << endl;
    }
    return 0;
}