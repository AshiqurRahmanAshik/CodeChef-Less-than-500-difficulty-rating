/*
Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/PARLIAMENT
 Date: 27/11/25
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    double n, x;
    cin >> tc;
    while (tc--)
    {
        cin >> n >> x;

        if (2 * x >= n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        return 0;
    }
}