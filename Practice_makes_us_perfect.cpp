/*
Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/PRACTICEPERF
 Date: 28/11/25
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, count = 0;
    cin >> a >> b >> c >> d;
    if (a >= 10)
        count++;
    if (b >= 10)
        count++;
    if (c >= 10)
        count++;
    if (d >= 10)
        count++;
    cout << count;
    return 0;
}