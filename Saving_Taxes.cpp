/* 
Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/TAXSAVING
 Date: 17/11/25  
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    int required, earning, tax;
    while (tc--){
    cin >> earning >> required;
    tax = earning -required;
    cout << tax <<endl;
    }
    return 0;
}