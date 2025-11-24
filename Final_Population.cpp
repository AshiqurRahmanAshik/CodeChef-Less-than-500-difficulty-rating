/*
Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/POPULATION
 Date: 24/11/25
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, x, y, z;
    cin >> tc;
    while (tc--)
    {
        cin >> x >> y >> z;
        cout << x - y + z << endl;
    }
    return 0;
}