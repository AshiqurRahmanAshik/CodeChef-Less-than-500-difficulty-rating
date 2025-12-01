/*
Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CHEAPFOOD
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

        int discount1 = (x * 10) / 100;
        int discount2 = 100;

        cout << max(discount1, discount2) << endl;
    }
    return 0;
}
