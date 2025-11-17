/* 
Problem Link: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/BIRYANI
 Date:  17/11/25 
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int classes, cost, tc;
    cin >> tc;
    while (tc--){
        cin >> classes >> cost ;
        int totalCost = classes*cost;
        cout << totalCost << endl;
    }
    return 0;
}