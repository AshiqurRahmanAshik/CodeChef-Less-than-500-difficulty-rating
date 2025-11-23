/*
Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/OCTATHON
 Date: 23/11/25
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int time;
    cin >> time;
    if (time < 3)
    {
        cout << "GOLD" << endl;
    }
    else if (time >= 3 && time < 6)
    {
        cout << "SILVER" << endl;
    }
    else
    {
        cout << "BRONZE" << endl;
    }
    return 0;
}