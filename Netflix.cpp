/*
Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/NETFLIX
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
        int a, b, c, x;
        cin >> a >> b >> c >> x;
        if (a + b >= x)
        {
            cout << "YES" << endl;
        }
        else if (a + c >= x)
        {
            cout << "YES" << endl;
        }
        else if (b + c >= x)
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