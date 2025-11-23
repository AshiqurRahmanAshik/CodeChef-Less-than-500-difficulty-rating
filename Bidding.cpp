/*
Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/AUCTION
 Date: 23/11/25
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, alice, bob, charlie;
    cin >> tc;
    while (tc--)
    {
        cin >> alice >> bob >> charlie;
        if (alice > bob && alice > charlie)
        {
            cout << "Alice" << endl;
        }
        else if (bob > alice && bob > charlie)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Charlie" << endl;
        }
    }
    return 0;
}