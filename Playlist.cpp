/*
Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/SONGS
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
        int n, x;
        cin >> n >> x;
        cout << n / (3 * x) << endl;
    }
    return 0;
}