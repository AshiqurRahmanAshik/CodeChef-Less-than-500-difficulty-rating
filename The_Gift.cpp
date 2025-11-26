/*
Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CS2023_GIFT
 Date:  26/11/25
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, n, m;
    cin >> x >> n >> m;
    if (x + m >= n)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}