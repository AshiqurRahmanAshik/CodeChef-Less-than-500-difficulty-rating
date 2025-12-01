/*
Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/SNDMAX
 Date: 22/11/25
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, a, b, c;
    cin >> tc;
    while (tc--)
    {
        cin >> a >> b >> c;
        int mx = max({a, b, c});
        int mn = min({a, b, c});
        int second_max = a + b + c - mx - mn;
        cout << second_max << endl;
    }
    return 0;
}