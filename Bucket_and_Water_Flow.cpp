/*
Problem Link:https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/WATERFLOW
 Date:01/12/25
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int w, x, y, z;
        cin >> w >> x >> y >> z;
        if ((w + y * z) > x)
        {
            cout << "overFlow" << endl;
        }
        else if ((w + y * z) == x)
        {
            cout << "filled" << endl;
        }
        else
        {
            cout << "Unfilled" << endl;
        }
    }
    return 0;
}