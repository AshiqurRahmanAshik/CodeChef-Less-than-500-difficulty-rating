/*
Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/BOBBANK
 Date: 12/01/25
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int p, x, y, z;
        cin >> p >> x >> y >> z;
        cout << p + (x - y) * z << endl;
    }
    return 0;
}