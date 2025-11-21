/* 
Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/IPLTRSH
 Date: 22/11/25  
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc, n, m;
    cin >> tc;
    while (tc--){
        cin >> n >> m;
        if (m>n){

            cout << "0" << endl;
        }else{

            cout << n-m << endl;
        }
    }
    return 0;
}