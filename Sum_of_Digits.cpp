/*
Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/FLOW006
 Date:   01/12/25
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;

        int sum = 0;
        while (n > 0)
        {
            sum += n % 10; // it will add the last digit
            n /= 10;       // it will remove the last digit
        }

        cout << sum << endl;
    }
    return 0;
}