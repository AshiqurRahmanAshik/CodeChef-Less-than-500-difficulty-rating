/*
Problem Link:https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/SPECIALITY?tab=statement
 Date: 27/11/25
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, setter, tester, editorialist;
    cin >> tc;
    while (tc--)
    {
        cin >> setter >> tester >> editorialist;
        if (setter > tester && setter > editorialist)
        {
            cout << "Setter" << endl;
        }
        else if (tester > setter && tester > editorialist)
        {

            cout << "Tester" << endl;
        }
        else
        {
            cout << "Editorialist" << endl;
        }
    }
    return 0;
}