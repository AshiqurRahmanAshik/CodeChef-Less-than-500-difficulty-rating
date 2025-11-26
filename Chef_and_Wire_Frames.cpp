/*
Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CWIREFRAME
 Date: 26/11/25
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, n, m, x;
    cin >> tc;
    while (tc--)
    {
        cin >> n >> m >> x;
        cout << 2 * (n + m) * x <<endl;
    }
    return 0;
}