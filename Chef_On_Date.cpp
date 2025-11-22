/* 
Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CHEFONDATE
 Date: 22/11/25  
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc, x , y;
    cin >> tc;
    while (tc--){
        cin >> x >> y;
        if (x>=y){
            cout << "NO"<< endl;
        }else{

            cout << "YES"<< endl;
        }
    }
    return 0;
}