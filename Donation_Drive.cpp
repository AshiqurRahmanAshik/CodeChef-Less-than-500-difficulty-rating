/* 
Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/DONDRIVE
 Date: 22/11/25  
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc, require, collected;
    cin >> tc;
    while(tc--){
    cin >> require >> collected;
    cout << require-collected <<endl;
    }
  
    return 0;
}