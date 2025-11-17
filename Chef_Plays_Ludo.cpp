/* 
Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/LUDO
 Date:  17/11/25 
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc, turn;
    cin >> tc;
    while(tc--){
        cin >> turn;
        if (turn==6){
            cout << "YES" <<endl;
        }else{
            cout << "NO" <<endl;
        }
    }
    return 0;
}