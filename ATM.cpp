/*
Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/HS08TEST
 Date:   26/11/25
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    float x, y;
    cin >> x >> y;
    if (int(x) % 5 != 0 || y < x + 0.5) // modulo operator can not operate on float value
    {
        cout << fixed << setprecision(2) << y;
    }
    else
    {
        cout << fixed << setprecision(2) << y - x - 0.5;
    }

    return 0;
}