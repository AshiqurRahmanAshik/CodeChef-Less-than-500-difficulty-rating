/*
Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/FINE
 Date: 23/11/25
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, fine;
    cin >> tc;
    while (tc--)
    {
        cin >> fine;
        if (fine <= 70)
        {
            cout << "0" << endl;
        }
        else if (fine > 70 && fine <= 100)
        {
            cout << "500" << endl;
        }
        else
        {
            cout << "2000" << endl;
        }
    }
    return 0;
}