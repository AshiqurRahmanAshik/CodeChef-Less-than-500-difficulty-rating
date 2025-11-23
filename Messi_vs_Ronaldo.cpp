/*
Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/MVR
 Date: 23/11/25
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    int messi = a * 2 + b * 1;
    int ronaldo = x * 2 + y * 1;
    if (messi > ronaldo)
    {
        cout << "Messi" << endl;
    }
    else if (ronaldo > messi)
    {
        cout << "Ronaldo";
    }
    else
    {
        cout << "Equal";
    }
    return 0;
}