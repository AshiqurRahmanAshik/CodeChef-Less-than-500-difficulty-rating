/*
Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/DOREWARD
 Date: 26/11/25
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, x;
    cin >> tc;
    while (tc--)
    {
        cin >> x;
        if (x <= 3)
        {
            cout << "BRONZE" << endl;
        }
        else if (x > 3 && x <= 6)
        {
            cout << "SILVER" << endl;
        }
        else
        {
            cout << "GOLD" << endl;
        }
    }
    return 0;
}