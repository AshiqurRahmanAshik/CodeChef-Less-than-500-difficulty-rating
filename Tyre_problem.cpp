/*
Problem Link:https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/TYRE
 Date: 28/11/25
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, n, m;
    cin >> tc;
    while (tc--)
    {
        cin >> n >> m;
        cout << (n * 2) + (m * 4) << endl;
    }
    return 0;
}