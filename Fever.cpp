/*
Problem Link:https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/FEVER
 Date:23/11/25
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, temperature;
    cin >> tc;
    while (tc--)
    {
        cin >> temperature;
        if (temperature > 98)
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