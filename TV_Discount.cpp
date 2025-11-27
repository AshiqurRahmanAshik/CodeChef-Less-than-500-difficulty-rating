/*
Problem Link:https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/TVDISC
 Date:28/11/25
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    float a, b, c, d;
    cin >> tc;
    while (tc--)
    {
        cin >> a >> b >> c >> d;
        float first = a - c;
        float second = b - d;
        if (first < second)
        {
            cout << "First" << endl;
        }
        else if (first > second)
        {
            cout << "Second" << endl;
        }
        else
        {
            cout << "Any" << endl;
        }
    }
    return 0;
}