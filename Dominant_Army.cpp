/*
Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/DOMINANT
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
        int a, b, c;
        cin >> a >> b >> c;
        if (a > b + c)
        {
            cout << "YES" << endl;
        }
        else if (c > b + a)
        {
            cout << "YES" << endl;
        }
        else if (b > a + c)
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