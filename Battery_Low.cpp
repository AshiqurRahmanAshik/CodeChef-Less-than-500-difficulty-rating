/*
Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/BATTERYLOW
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
        int x;
        cin >> x;
        if (x <= 15)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}