/*
Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/PARTY2
 Date: 24/11/25
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, n, x, k;
    cin >> tc;
    while (tc--)
    {
        cin >> n >> x >> k;
        if (n * x <= k)
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