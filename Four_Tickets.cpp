/* 
Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/FOURTICKETS
 Date:   23/11/25
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc, x;
    cin >> tc;
    while (tc--){
        cin >> x;
        int total = 4 * x;
        if (total <=1000){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;

        }
    }
    return 0;
}