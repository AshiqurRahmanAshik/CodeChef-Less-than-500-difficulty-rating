/*
Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/READPAGES
 Date: 23/11/25
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
        if (x <= y * z)
        {
            cout << "YES" << endl;
        }
        else
        {

            cout << "NO" << endl;
        }
    }
    return 0;
}