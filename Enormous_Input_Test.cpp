/*
Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/INTEST
 Date: 28/11/25
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, p, count = 0;
    cin >> n >> k;
    while (n--)
    {
        cin >> p;
        if (p % k == 0)
            count++;
    }
    cout << count;

    return 0;
}